#include <bits/stdc++.h>
using namespace std;

enum class Direction { Idle, Up, Down };

class Elevator {
public:
    Elevator(int minFloor, int maxFloor, int start=0)
        : minF(minFloor), maxF(maxFloor), cur(start), dir(Direction::Idle) {}

    void request(int floor) {
        if (floor < minF || floor > maxF) return;
        if (floor == cur) return; // already here
        pending.insert(floor);
        updateDirection();
    }

    // Single simulation step: move one floor if needed, stop if this floor requested.
    void step() {
        if (pending.empty()) { dir = Direction::Idle; return; }

        // Move according to direction
        if (dir == Direction::Up)      ++cur;
        else if (dir == Direction::Down) --cur;

        // Stop if current floor is requested
        if (pending.count(cur)) {
            // Simulate open/close by clearing the stop
            pending.erase(cur);
            // Optional: emulate dwell time with external timing if desired
        }

        // If no more in this direction, consider switching
        if (!hasFurtherInCurrentDir()) updateDirection();
    }

    int current() const { return cur; }
    Direction direction() const { return dir; }
    bool idle() const { return pending.empty() && dir == Direction::Idle; }

private:
    int minF, maxF;
    int cur;
    Direction dir;
    // Using ordered set to easily find floors above/below
    std::set<int> pending;

    bool hasAbove() const {
        auto it = pending.upper_bound(cur);
        return it != pending.end();
    }
    bool hasBelow() const {
        auto it = pending.begin();
        return (it != pending.end() && *it < cur);
    }
    bool hasFurtherInCurrentDir() const {
        if (dir == Direction::Up)   return hasAbove();
        if (dir == Direction::Down) return hasBelow();
        return false;
    }
    void updateDirection() {
        if (pending.empty()) { dir = Direction::Idle; return; }
        if (dir == Direction::Idle) {
            // Choose closest request to decide initial direction
            auto itUp = pending.lower_bound(cur);
            bool upAvail = (itUp != pending.end());
            bool downAvail = (itUp != pending.begin());
            if (upAvail && downAvail) {
                int upDist = *itUp - cur;
                int downFloor = *prev(itUp);
                int downDist = cur - downFloor;
                dir = (upDist <= downDist) ? Direction::Up : Direction::Down;
            } else if (upAvail) dir = Direction::Up;
            else dir = Direction::Down;
        } else {
            // Maintain SCAN: continue same direction if possible, else switch
            if (dir == Direction::Up)   dir = hasAbove() ? Direction::Up : (hasBelow() ? Direction::Down : Direction::Idle);
            else if (dir == Direction::Down) dir = hasBelow() ? Direction::Down : (hasAbove() ? Direction::Up : Direction::Idle);
        }
    }
};

int main() {
    Elevator e(-1, 20, 0);
    // Example requests
    e.request(5);
    e.request(2);
    e.request(8);
    e.request(3);

    // Simple loop
    for (int t=0; t<50 && !e.idle(); ++t) {
        cout << "t=" << t << " floor=" << e.current()
             << " dir=" << (e.direction()==Direction::Up?"Up":e.direction()==Direction::Down?"Down":"Idle")
             << "\n";
        e.step();
    }
}


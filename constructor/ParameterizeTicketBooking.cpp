// ParameterizeTicketBooking

#include<iostream>
using namespace std;

class Ticket {
  string movieName;
  int seatNo;
  
public:
  Ticket(string name, int seat) {
    movieName = name;
    seatNo = seat;
  }
  
  void printTicket() {
    cout << " Movie: " << movieName << " | Seat No: " << seatNo << endl;
  }
};

int main() {
  Ticket t1("Inception", 45);
  t1.printTicket();
  
  
  return 0;
}

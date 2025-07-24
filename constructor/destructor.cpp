// destructor

#include<iostream>
using namespace std;

class FileHandler {
  public:
    FileHandler() {
      cout << "File opened!" << endl;
    }
    
    ~FileHandler() {
      cout << "File closed" << endl;    
    }
};

int main() {
  FileHandler fh;
  cout << "Doing some file operations..." << endl;
  // When main ends, destructor is auto-called
  
  return 0;
}

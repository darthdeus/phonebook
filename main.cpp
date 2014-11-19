#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

class Person {
  public:
    std::string first, last, address;
    int phone;
};

std::istream& operator>>(std::istream& is, Person& p) {
  std::string b;
  is >> b;
  // TODO - check b
  //
  is >> p.first >> p.last >> p.address >> p.phone;

  is >> b;
  return is;
}

std::ostream& operator<<(std::ostream& os, const Person& p) {
  os << p.first << " " << p.last << " " << p.address << " " << p.phone;
  return os;
}

int main() {
  std::ifstream is("input.txt");

  Person p;
  is >> p;
  cout << p << endl;


  return 0;
}

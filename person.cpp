#include <istream>
#include <ostream>

#include "person.hpp"

using std::endl;

std::istream& operator>>(std::istream& is, Person& p) {
  std::string b;
  is >> b;
  // TODO - check b

  // TODO - handle when one of the fields spans multiple lines
  is >> p.first >> p.last >> p.address >> p.phone;

  is >> b;
  return is;
}

std::ostream& operator<<(std::ostream& os, const Person& p) {
  os << "{" << endl;
  os << "  " << p.first << endl;
  os << "  " << p.last << endl;
  os << "  " << p.address << endl;
  os << "  " << p.phone << endl;
  os << "}";

  return os;
}

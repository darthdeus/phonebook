#include <fstream>
#include <iostream>
#include <string>
#include <list>

#include "person.hpp"

using std::cout;
using std::endl;
using std::cin;

int main() {
  std::ifstream is("input.txt");

  Person p;
  is >> p;
  cout << p << endl;

  return 0;
}

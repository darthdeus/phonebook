#include <iostream>
#include "phonebook.hpp"
#include "interactive.hpp"

using std::cout;
using std::cin;
using std::endl;

void print_menu() {
  cout << "a) List all" << endl;
  cout << "b) Add" << endl;
  cout << "c) Delete" << endl;
  cout << "d) Save" << endl;
  cout << "e) Find by name" << endl;
  cout << "f) Find by phone" << endl;
  cout << "q) Quit" << endl;
  cout << "****************" << endl;
}

void invalid_command() {
  cout << "Neplatny prikaz";
}

void Cli::start_interactive() {
  print_menu();

  while (true) {
    char c;
    cin >> c;

    if (cin.eof()) return;

    switch (c) {
      case 'a': list_all(); break;
      case 'b': add_person(); break;
      case 'c': break;
      case 'd': break;
      case 'e': break;
      case 'f': break;
      case 'q': return;
      default: invalid_command();
    }

    cout << endl << endl;
    print_menu();
  }
}

void Cli::list_all() {
  cout << endl << endl << "Listing all:" << endl;

  int i = 1;

  for (auto& person : book.data) {
    cout << "  " << i++ << ". " << person << endl;
  }
}

void Cli::add_person() {
  cout << endl << endl << "Enter a new person:" << endl;
  Person p;
  cin >> p;
  book.add(p);
  cout << "OK" << endl;
}

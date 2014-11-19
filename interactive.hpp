#ifndef INTERACTIVE_HPP
#define INTERACTIVE_HPP

#include "phonebook.hpp"

class Cli {
  public:
    Cli(Phonebook& book): book(book) {}
    void start_interactive();

  private:
    void list_all();
    void add_person();

    Phonebook& book;
};


#endif

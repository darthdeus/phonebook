#ifndef INTERACTIVE_HPP
#define INTERACTIVE_HPP

#include "phonebook.hpp"

class Cli {
  public:
    Cli(Phonebook& book): book(book) {}
    void start_interactive();

  private:
    Phonebook& book;
};


#endif

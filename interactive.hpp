#ifndef INTERACTIVE_HPP
#define INTERACTIVE_HPP

#include "phonebook.hpp"

class Cli {
  public:
    Cli(Phonebook& book);
    void start_interactive();
};


#endif

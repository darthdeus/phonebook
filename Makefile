FILES=main.cpp person.cpp phonebook.cpp

default:
	@clang++ -std=c++1y -g -Wall -Wextra $(FILES) -o bin/main
	@./bin/main

#include <iostream>

#include "iter.hpp"

void print(const int x) { std::cout << x << std::endl; }

void print(const char *x) { std::cout << x << std::endl; }

void addOne(int &x) { x++; }

int main() {
  std::cout << "----- int intarray[] = {1,2,3,4,5};" << std::endl;
  int intarray[] = {1, 2, 3, 4, 5};
  std::cout << "----- print -----" << std::endl;
  iter(intarray, 5, print);
  std::cout << "----- addOne -----" << std::endl;
  iter(intarray, 5, addOne);
  std::cout << "----- print -----" << std::endl;
  iter(intarray, 5, print);

  std::cout
      << "----- std::string stringarray[] = {\"Hello\" , \"World\" ,  \"!\"};"
      << std::endl;
  const char *chararray[] = {"Hello", "World", "!", "!"};
  std::cout << "----- print -----" << std::endl;
  iter(chararray, 4, print);
}

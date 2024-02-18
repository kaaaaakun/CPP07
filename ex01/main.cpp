#include <iostream>

#include "iter.hpp"

template <typename T>
void print(T x) {
  std::cout << x << ", ";
}

void addOne(int &x) { x++; }

int main() {
  std::cout << "\n<----- int intarray[] = {1,2,3,4,5};" << std::endl;
  int intarray[] = {1, 2, 3, 4, 5};
  std::cout << "-- print -----" << std::endl;
  iter(intarray, 5, print<int>);
  std::cout << "\n-- addOne -----" << std::endl;
  iter(intarray, 5, addOne);
  std::cout << "-- print -----" << std::endl;
  iter(intarray, 5, print<int>);

  std::cout << "\n<----- std::string stringarray[] = {\"Hello\" , \"World\" ,  "
               "\"!\"};"
            << std::endl;
  const char *chararray[] = {"Hello", "World", "!", "!"};
  std::cout << "-- print -----" << std::endl;
  iter(chararray, 4, print<const char *>);
  std::cout << std::endl;
}

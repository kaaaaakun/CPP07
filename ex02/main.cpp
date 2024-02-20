#include <cstdio>
#include <iostream>

#include "Array.hpp"

#define MAX_VAL 750
int defaultTest(int ac, char** av) {
	std::cout << "-- default test --" << std::endl;
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  // SCOPE
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    int i = 0;
    for (; i < MAX_VAL; i++) {
      if (mirror[i] != test[i]) {
        std::cerr << "didn't save the same value!!" << std::endl;
        return 1;
      }
    }
    if (i == MAX_VAL) std::cout << "OK\n";
  }

  int i = 0;
  for (; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }
  if (i == MAX_VAL) std::cout << "OK\n";
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror;
  return 0;
  (void)av;
  (void)ac;
}

void myTest(int ac, char** av) {
	std::cout << "-- my test --" << std::endl;
  try {
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.getSize(); i++) {
      arr[i] = i;
      std::cout << arr[i] << std::endl;
    }
    std::cout << "---addcount" << std::endl;
    for (unsigned int i = 0; i < arr.getSize(); i++) {
      arr[i] = arr[i] + 1;
      std::cout << arr[i] << std::endl;
    }
    std::cout << arr[10] << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  (void)ac;
  (void)av;
}

int main(int argc, char** argv) {
  myTest(argc, argv);
  defaultTest(argc, argv);
//  system("leaks -q main");
  return 0;

  (void)argv;
  (void)argc;
}

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arrayPtr, int arraySize, F foo) {
  if (arrayPtr == NULL) {
    return;
  }
  for (int i = 0; i < arraySize; i++) {
    foo(arrayPtr[i]);
  }
}

// template <typename T>
// void iter(T *arrayPtr, int arraySize, void (*foo)(T &)) {
//   for (int i = 0; i < arraySize; i++) {
//     foo(arrayPtr[i]);
//   }
// }

#endif

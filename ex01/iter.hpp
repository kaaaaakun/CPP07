#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arrayPtr, int arraySize, void (*foo)(const T)) {
  for (int i = 0; i < arraySize; i++) {
    foo(arrayPtr[i]);
  }
}

template <typename T>
void iter(T *arrayPtr, int arraySize, void (*foo)(T &)) {
  for (int i = 0; i < arraySize; i++) {
    foo(arrayPtr[i]);
  }
}

#endif

// #ifndef ITER_HPP
// #define ITER_HPP
//
// #include <iostream>
//
// template <typename T>
// void iter(T *arrayPtr, int arraySize, void (*foo)(T)) {
//	for(int i = 0; i<arrayPtr; i++) {
//		foo(arrayPtr[i]);
//	}
// }
//
// template <typename T>
// void iter(T *arrayPtr, int arraySize, void (*foo)(const T)) {
//	for(int i = 0; i<arrayPtr; i++) {
//		foo(arrayPtr[i]);
//	}
// }
// #endif

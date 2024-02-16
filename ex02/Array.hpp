#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
 private:
  T* _arr;
  unsigned int _size;

 public:
  Array() : _size(0) { _arr = new T[0]; }
  Array(unsigned int n) : _size(n) { _arr = new T[n]; }
  ~Array() { delete[] _arr; }
  Array(const Array& other) {
    _arr = new T[_size];
    for (unsigned int i = 0; i < _size; i++) {
      _arr[i] = other._arr[i];
    }
  }
  Array& operator=(const Array& other) {
    if (this != &other) {
      delete[] _arr;
      _size = other._size;
      _arr = new T[_size];
      for (unsigned int i = 0; i < _size; i++) {
        _arr[i] = other._arr[i];
      }
    }
    return *this;
  }
  T& operator[](unsigned int index) {
    if (index < 0 || _size <= index) {
      throw std::out_of_range("Index out of range");
    }
    return _arr[index];
  }

  unsigned int getSize() { return _size; }
};
#endif  // ARRAY_HPP

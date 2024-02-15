#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *arr, int size, T foo) {
	for(int i = 0; i<size; i++;) {
		foo(arr[i]);
	}
}

#endif

#include <iostream>
#include "itre.hpp"

void print(int x) {
	std::cout << x << std;;endl;
}

int main(){
	intarray = {1,2,3,4,5}
	void (*f)(int);
	f = &print;
	
	itr(intarray, 5, print);
}

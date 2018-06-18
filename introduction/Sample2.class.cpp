#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(int p1, int p2, int p3) : a1(p1), a2(p2), a3(p3){
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a1 = " << this->a2 << std::endl;
	std::cout << "this->a1 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void){
	std::cout << "Destructor called" << std::endl;
}

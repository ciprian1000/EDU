#include "Cat.h"

#include <iostream>

Cat::Cat()
	: Animal(4, "Cat")
{}

Cat::~Cat() {}

/*This is an actual implementation of the Speak function, so this class
is NOT abstract any more. It is now a concrete class and it can be instantiated.*/
void Cat::Speak() {
	std::cout << "My name is " << mName << " and I have " << mNumLegs << " legs." << std::endl;
}

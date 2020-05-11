#include "Dog.h"

#include <iostream>

Dog::Dog()
	: Animal(4, "Dog")
{}

Dog::~Dog() {}

void Dog::Speak() {
	std::cout << "My name is " << mName << " and I have " << mNumLegs << " legs." << std::endl;
}

#include "Bird.h"

#include <iostream>

namespace {
	/*Its a good idea to keep the constant numbers we require in the program
	in constant variables with a descriptive name, otherwise your colleagues 
	might not understand what the number represents.

	Using numbers without a name is often called "magic numbers" as you have
	to guess what they represent*/
	constexpr int NUM_LEGS = 2;
}

Bird::Bird(std::string name, bool canFly)
	: Animal(NUM_LEGS, name)
	, mCanFly(canFly)
{}

Bird::~Bird() {}

void Bird::Speak() {
	std::cout << "My name is " << mName << " and I have " << mNumLegs << " legs." << std::endl;
	if (mCanFly) {
		std::cout << "And I can fly!" << std::endl;
	} else {
		std::cout << "I am sad because I cannot fly!" << std::endl;
	}
}

#pragma once

#include "Animal.h"

/*Very similar to the Cat class*/
class Dog : public Animal {
public:
	Dog();
	~Dog();

	void Speak() override;
};

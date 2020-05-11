#pragma once

#include "Animal.h"

/*Extending the Animal class with : 
The type of inheritance is public which is the most common one.
That means that all the functions and variables keep the same 
access modifiers as in the base class.
*/
class Cat : public Animal {
public:
	Cat();
	~Cat();

	void Speak() override; /*this function has been market as
	virtual in a previous class, so it can be overridden (changed)
	
	We use the override instruction to specify our intention.
	If a function marked override is not virtual, the compiler
	will throw an error and it will allow us to correct the problem.*/
};

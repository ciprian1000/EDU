#pragma once

#include "Animal.h"

/*Extending the Animal class*/
class Bird : public Animal {
public:
	/*The constructor does not need to be the same as the base class,
	as long as the base constructor is called with the right parameters.*/
	Bird(std::string name, bool canFly);
	~Bird();

	void Speak() override;
	
protected:
	bool mCanFly;
	//In a sub-class you can always add more variables or functions.
};

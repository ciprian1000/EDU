#pragma once

#include <string>

/*This is a class that will be used as a base class for others.
It has some basic functionality that all the others will inherit.

This class has a virtual function, that means that the function
can be modified by a sub-class (one extending Animal).

If a function is not marked virtual, then it cannot be modified
in sub-classes.

As it happens, the Speak() function is a pure virtual function,
which means that it does not have an implementation.

A class with at least one pure virtual function is incomplete
and is called an abstract class. It cannot be instantiated (we 
cannot make objects of it); it's only use is to serve as a 
base class for other classes.

If you think about it, no animal is just that, if you look
closely, it has a name and a specialized type.

Check out the Animal.cpp also to see the implementation
of this class.
*/
class Animal {
public:
	Animal(int numLegs, std::string name);
	~Animal();

	int GetNumLegs() const;		 //const functions cannot modify
	std::string GetName() const; //the class member variables
	virtual void Speak() = 0; //pure virtual function

protected:
	int mNumLegs;
	std::string mName;
};

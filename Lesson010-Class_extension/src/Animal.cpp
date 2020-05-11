#include "Animal.h"

Animal::Animal(int numLegs, std::string name)
	: mNumLegs(numLegs)
	, mName(name)
{}

Animal::~Animal() {
	mNumLegs = 0; //this is not necessary, it's just an example of a destructor
}

int Animal::GetNumLegs() const {
	return mNumLegs;
}

std::string Animal::GetName() const {
	return mName;
}

/*As you can see, the Speak function is not here. it has to be
implemented in a sub-class before objects can be created from them.

Now go and checkout all the subclasses: Bird, Cat and Dog.
The Bird class will be extended further by Chicken.

Class hierarchies can be as long as you want them, but it's a 
good idea to restrict the number of extensions, as to not 
confuse other people in the project, or even yourself in a week
after you write all that.*/

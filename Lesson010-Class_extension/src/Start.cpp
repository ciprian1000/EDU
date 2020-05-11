/*Class extension
With the introduction of classes in C++ we gain access to object oriented
programming aka OOP. This methodology tries solvind problems by modelling
the real life objects into classes and objects.

As we have seen in the previous lesson, a class is a definition for a 
data structure, a metadata if you will. A class is not data itself,
but the description of how a certain data entity looks like.

When we use the class to create a variable, we call that variable
an object. This object is the actual data we require in our program.
*/

#include <iostream>

//Open Animal.h and Animal.cpp for more information

#include "Cat.h"
#include "Dog.h"
#include "Chicken.h"

void Exercises();

int main() {
	Cat cat;
	cat.Speak();

	Dog dog;
	dog.Speak();

	Chicken chicken;
	chicken.Speak();

	Exercises();
}

//Implement the Penguin class here:



void Exercises() {
	/*Implement the penguin class and uncomment the following code*/

	/*Penguin penguin;
	penguin.Speak();*/
}

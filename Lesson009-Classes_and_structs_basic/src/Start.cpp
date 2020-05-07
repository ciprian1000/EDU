/*Classes and structs
Classes are one onf the most important features of the C++ language and one
of the most complex.

The first C++ version was in fact the C language with support for classes.
Since then C++ and C have diverged greatly, so much so that now can be considered
two different languages, instead of an extension of one programming language.

Classes are a very complex concept and as such they have a lot of functionality.
This class is just the most basic introduction to classes, and we will come back
to this subject in many future lessons.
*/

#include <iostream>

#include "MyFirstClass.h" //more information in here

void Exercises();

int main() {
	MyFirstClass m;
	{
		MyFirstClass n; //object n is created
	}//object n is destroyed

	void Exercises();
}

//write your class here:

void Exercises() {
	//write a class or struct that makes the next block of code compile

	//uncomment the following code
	/*AClass a(10, 12.0f);
	std::cout << "x is " << a.x << std::endl;
	std::cout << "y is " << a.y << std::endl;*/
}
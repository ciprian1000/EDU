#include "MyFirstClass.h"

#include <iostream>

namespace {
	/*the only difference between classes and structs is that 
	the default access modifier is private for classes and public
	for structs
	Some programmers like to make a functional difference, using
	classes for storing data and functions, and keep the structs
	for data only containers. The language does not impose a 
	restriction*/

	struct MyFirstStruct {
		//these are public:
		int a;
		int b;

		MyFirstStruct()
			: a(0) //this is called an initializer list and it is
			, b(0) //a more efficient way to initialize a struct's data
		{}

		MyFirstStruct(int i, int j)
			: a(i)
			, b(j)
		{} //structs can have constructors also

		~MyFirstStruct() { //destructors also
		}
	};
}

MyFirstClass::MyFirstClass() {
}

MyFirstClass::MyFirstClass(int i) {
	a = i;
}

MyFirstClass::~MyFirstClass() {
	//we add code that run when the class is destroyed
}
//there can be only one destructor and it cannot have any parameters

void MyFirstClass::RandomFunction(int i) {
	MyFirstStruct s(1, 2);
	//when we instantiate the class, we call s an object
	//at any time we can have many objects of type MyFirstStruct
	//just like we can have many int variables
	//int and MyFirstStruct are not very different, except int is provided 
	//by the C++ language, while MyFirstStruct is created by us.
	//When it comes to the usage, there is no difference

	std::cout << "RandomFunction called" << std::endl;
	
	/*because a and b are public, we can access them through an object of the class*/
	std::cout << "a is " << s.a << std::endl;
	std::cout << "b is " << s.b << std::endl;

}

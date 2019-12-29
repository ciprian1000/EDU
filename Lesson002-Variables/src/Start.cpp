#include <iostream>
#include <cassert>

/* INTRO
In this lesson we learn about variables
A typical program has 2 main components, the code we write and the data
we operate on.
This data is held in memory, and a computer can have several types of memory.
For the purpose of this lesson we will talk about the RAM (random access memory)
When a program starts, it is read from the disk and loaded in the RAM memory.
The operating system will allocate a certain amount of virtual memory to
our program. From the point of view of our program this memory is continuous.
Our program can use data storages called variables to store, inspect and 
modify data fields needed for the execution.
C++ is a strong typed language, which means that every variable has a 
well defined type.
*/

//--------------------------------------------------------------------------

/* EXAMPLE
The folloging line is a variable declaration; it starts with the type,
then there is a name that we will use to access the variable later; it
is a good idea to initialize the variables we define with a value; variables
that are NOT initialized and and used as such, might produce unexpected results,
as the memory of a program is often reused and not always wiped clean after use.
*/
int globalVariable = 0;//this is a global variable that is accessible from anywhere

//--------------------------------------------------------------------------

/*
Other than a type and a name variables also have a scope, the interval of time
where they are alive and accessible.
*/

//--------------------------------------------------------------------------

void exercise();

int main() {
	/*
	The following variable is scoped to the function and is not accessible from 
	other functions
	*/
	bool functionScopedVariable = true;

	{ //this is a block / variable scope
		double blockScopedVariable = 0.0;
	} //the end of the block

	//the blockScopedVariable is no longer available here
	//it has been destroyed and the value lost

	/* TYPES
	Let's look at some of the types that are used in C++
	*/

	//void v1; is an incomplete type and cannot be used as such
	//it is often used in functions to denote that they don't return any result

	bool v2 = true; //this is a [true, false] type

	//integer numbers:
	
	int v3 = 0; /* the classical signed integer type; it's set of values 
	are platform specific;*/

	char v4 = 0; /*a very short version of int, it can take values from 
	-127 to 128 and can represent the whole set of ASCII characters*/

	short v5 = 0; //a short version of int

	long v6 = 0; //a long version of int

	long long v7 = 0; //a very long version of int

	//int types can be signed or unsigned; signed is the default if not specified
	unsigned char v8 = 0; //can hold values from 0 to 255
	signed int v9; //same as "int v9;"
	
	//--------------------------------------------------------------------------
	
	//Fractional numbers
	float v10 = 0.0f; //single precision floating point type.

	double v11 = 0.0; //double precision floating point type.
	
	long double v12 = 0.0; //extended precision floating point type.

	//--------------------------------------------------------------------------

	//arrays are collections of data of the same type and with a specific size
	int a1[10]; //a collection of 10 integers

	double a2[2]; //a collection of 2 doubles

	//--------------------------------------------------------------------------

	/*
	These are just some of the types that can be used in C++ by default
	*/

	exercise();
}

//--------------------------------------------------------------------------

//Complete the code in this function to get the expected result;
void exercise() {
	/*
	We have 3 brothers John, Jack and Jim; Their ages are 5, 14 and 36;
	We would like to show that on the screen.
	*/
	{
		int John, Jack, Jim;

		std::cout << "John's age: " << John << std::endl;
		assert(John == 5);

		std::cout << "Jack's age: " << Jack << std::endl;
		assert(Jack == 14);

		std::cout << "Jim's age: " << Jim << std::endl;
		assert(Jim == 36);
	}
}

//--------------------------------------------------------------------------

/*Namespaces
Are a way to group data and code based on a certain aspect, often
times functionality.

Think of it as a last name. Everyone in your immediate family has the same
last name, so they belong to the same group and you know you are related.
*/

#include <iostream>

namespace Point {
	int x;
	int y;
}

namespace {
	/*This is an unnamed namespace; data and functions contained can be used 
	in this file, but are invisible to other files. This is a good way to hide
	variables and functions.*/
	int a;
}

namespace outer {
	namespace inner {
		//namespaces can be nested and have multiple levels

		float x;
		float y;
	}
}

void Exercises();

int main() {
	Point::x = 10;
	Point::y = 1;

	int k = Point::x + Point::y;

	a = 100; //yes, this is the a in the unnamed namespace; you do not need to
			 //specify "name::" as it has no name


	std::cout << "a = " << a << std::endl;
	/*In fact we have already used namespaces before; std:: is a namespace used
	widely for the standard library; most 
	*/

	outer::inner::x = 13.2f; //this is different from Point::x
	outer::inner::y = outer::inner::x / 2; //this is different from Point::y

	{//a way to simplify the use of namespaces is with the "using" clause
		using namespace outer::inner; //this clause is scoped to this {} block
		x = 18.0f; //x is part of the outer::inner namespace
	}
	//outside the {} block the using does not apply any more
	{//another way to simplify the use of long or nested namespaces is to declare another one
		namespace oi = outer::inner; //this is also scoped to the {} block
		oi::x = 0.2f;
	}
	//oi namespace does not exist any more; it has been destroyed at the end of the {} block

	Exercises();
}

/*Namespace reccomandations
1)  Use them do diferentiate between classes with the same name.
	Sometimes you will have 2 variables or classes (we'll come back to those) that represent
	the same data structure in different ways; you could name them name1, name2, name3 but that
	is confusing and it complicates things; this is a perfect use case for namespaces;

2)  Name your namespace according to what it represents; don't be afraid to give it a long name;

3)	Be careful when "using" namespaces; as much as possible put the "using namespace ..." clause
	in a block; scope is to a function, or a class, or a block of your function; remember that
	"using ..." is scoped and that if you add it globally then all the code after that or that 
	includes that file will have modified access; many errors happen like this;

4)  Never write "using ..." globally in a header file, especially for the std:: namespace;
	Some people thing that it's anoying to always write std:: in front of the functions and 
	classes, but writing "using namespace std;" globally in a header will make all the source
	files and headers including it lose the option to use variables and functions with the same
	name from a different namespace;

	Namespaces are a way to restrict access so don't invalidate all that by writing "using ..."
	in a header file.
*/

void Exercises() {
	/*
		Write the missing code to make this function compile and run correctly
	*/

	

	
	std::cout << "E is aproximatelly " << Math::E << std::endl;

	std::cout << "PI is aproximatelly " << Math::Circle::PI << std::endl;
}

#include <iostream>
#include <cassert>

/* OPERATORS
In this lesson we'll learn about operators which are special functions
that act on 1 to 3 operands (often variables, but other data also)
*/

void PrettyPrint(const char* message, bool value);
void PrettyPrint(const char* message, const int value, const int expectedValue);
void Exercises();

/*
Read carefully through the types of operators and after that
go to the implementation of the Exercises() function (just after
main() ends) and solve the problems there. 

THE PROGRAM WILL NOT RUN UNTIL YOU SOLVE ALL THE PROBLEMS
*/

int main() {
	{ //Arithmetic operators
		int a = 10;
		int b = 4;
		int c = a + b; //addition
		c = b - c; //subtraction
		a = b * c; //multiplication
		a = a / c; //division (make sure c is different than 0)
		a = a % b; //modulus - returns the division remainder
		a++; ++a; //increment by 1
		b--; --b; //decrement by one;

		/*In the case of ++ and -- there are 2 use cases that give different
		results when part of a larger expression; used before the variable
		they will increment / decrement the value and then evaluate,
		while used after the variable they will return the old value first
		before changing the variable by incrementing / decrementing;
		*/

		a = 1; b = 2;
		c = a++ + --b;  //a++ returns 1 the old value of a, then increments a;
						//--b will subtract 1 from b and return the new value;

		a = 1; b = 2;
		std::cout << "When a is " << a;
		std::cout << " a++ is " <<
			a++ << " and then a becomes " << a << std::endl;

		std::cout << "When b is " << b;
		std::cout << " --b is " <<
			--b << " and then b is still " << b << std::endl;
	}

	{ // Comparison operators
		int a = 10;
		int b = 10;
		int c = 11;

		bool f1 = (a == b); //equal to
		bool f2 = (a != b); //not equal to
		bool f3 = (a > b); //greater than
		bool f4 = (a < c); //less than
		bool f5 = (a >= b); //greater than or equal to
		bool f6 = (a <= c); //less than pr equal to

		//all these operators will evaluate to a bool (true or false)
	}

	{ /*Logical operators are used to operate on bool values or
		expressions that can evaluate to bool values
		*/
		bool a = true;
		bool b = false;

		PrettyPrint("a and b is ", a && b); //true if both expressions are true
		PrettyPrint("a or b is ", a || b); //true if at least one is true
		PrettyPrint("not a is ", !a); //the complement of a (negation)

	}

	{ //Assignment operators
		int a = 10;
		int b = -5;
		int c = 11;

		int d = 1; //the assignment operator
		d += a; //equivalent to d = d + a;
		d -= b; //equivalent to d = d - b;
		d *= c; //equivalent to d = d + c;
		d /= a; //equivalent to d = d + a; this one will round down the fraction 
				//to an integer number
	}

	//there are other special operators that we will speak in later lessons

	Exercises();
}

void Exercises() {
	{
		const int a = 1;
		const int b = 10;
		const int c = 15;

		int result = 0; //good practice to give your variable a default value
						//even if it's not the final one
		//INSERT YOUR CODE HERE:

		
		//----------------------
		PrettyPrint("a + b = ", result, a + b);

		//Try creating the expected value from the above data you have
		//INSERT YOUR CODE HERE:

		
		//----------------------
		PrettyPrint("Expecting a value of 25: ", result, 25);

		//Try creating the expected value from the above data you have
		//Hint: Remember the rounding down mentioned before?
		//INSERT YOUR CODE HERE:

		
		//----------------------
		PrettyPrint("Expecting a value of 0: ", result, 0);
	}
}

void PrettyPrint(const char* message, bool value) {
	std::cout << message << (value ? "true" : "false") << std::endl;
}

void PrettyPrint(const char* message, const int value, const int expectedValue) {
	std::cout << message << value << std::endl;
	assert(value == expectedValue);
}

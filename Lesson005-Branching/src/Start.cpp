#include <iostream>
#include <string>
#include <stdexcept>

/*BRANCHING
This lesson is about controlling the flow of execution in your program.
In a typical program execution will go from one line to the next, but
there will be certain moments where the execution has to go to one line
or another. These are decision points that depend on certain conditions.
*/

void Exercises();

int main() {
	{
		int a = 10;
		int b = 8;
		//So we introduce our first branching instruction, the if statemet
		if (a < b) {
			std::cout << a << " is smaller that " << b << std::endl;
		}
		else if (a > b) {
			std::cout << a << " is greater than " << b << std::endl;
		}
		else {
			std::cout << a << " is equal to " << b << std::endl;
		}
		//Exercise: try to change the values of a and b and see the output

		/*As you can see the if statement can have an alternative branch.
		marked by the "else" block.

		Another thing to mention is that if statements can be chained,
		the else block can contain another if.
		*/
		
		/*The next example shows us a few interesting details:
		1) The else block is optional;
		2) When having only one instruction the {} are optional;
		*/
		if (a == b)
			std::cout << a << " is equal to " << b << std::endl;

		if (a > b)
			std::cout << a << " is greater than " << b << std::endl;
			std::cout << a << " is greater than " << b << std::endl;
		/*
		In the example above, only the first std::cout line is part of the if
		statement. The second std::cout line will execute all the time.
		The C++ compiler does not care about indentation, unlike other
		languages (like python)
		It is always a good practive to include the {} to delimit blocks of code
		*/

		//if both lines should execute conditionally, you should write it like this
		if (a > b)
		{
			std::cout << a << " is greater than " << b << std::endl;
			std::cout << a << " is greater than " << b << std::endl;
		}
	}

	{ //switch statement
		int a = 5;
		switch (a) {
		case 1:
			a *= 2;
			break;
		
		case 2:
			a -= 1;
			break;

		case 3:
			std::cout << "This line executes when a is 3." << std::endl;
		case 4:
		case 5:
			std::cout << "a is " << a << std::endl;
			break;

		default:
			std::cout << "This line executes when no other case does." << std::endl;
			break;
		}
		
		/*The switch statement is a very powerful one when dealing with discrete values.
		It can be used with integer and char variables.
		When a case is reached, execution will follow every line of code until a "break;"
		or "return" is reached; in the example above, when a is 3, there are two 
		std::cout << lines executing because the case 3 does not end with a "break;"*/

		//SWITCH STATEMENTS CAN BE REWRITTEN WITH SEVERAL IF-ELSE STATEMENTS
	}

	{ //Ternary operator
		const int a = 5;
		int b = (a > 4 ? 1 : 2);
		/*The ternary operator ( ?: ) is a quick way to calculate a value
		based on a condition; it can only be used when the return type
		of both branches is the same, and some people find it confusing.
		As a general rule, if your ?: operator exceeds 25 characters,
		or is not easily understanded through a quick glance, then you 
		should probably split it in an if statement.*/
	}

	Exercises();
}

int ReadInt() {
	while (true) {
		std::string result;
		std::cout << "Please insert an integer number: ";
		std::cin >> result;

		try {
			return std::stoi(result);
		}
		catch (const std::invalid_argument& e) {
			std::cout << result << " is not an integer number.";
		}
	}
}

void Exercises() {
	int a = ReadInt(); //Ask the user to insert a number and return the value
	/*Check if a is positive. If not, make it positive; regardless of this
	operation, print the number to the console.*/

	int b = ReadInt();
	/*b is a code for the next operation;
	if b is 1 or 2, print it on the screen;
	if b is 3, print it's square (power or 2);
	if b is 4, do nothing;
	if b is 5, read another number and print it;*/
}

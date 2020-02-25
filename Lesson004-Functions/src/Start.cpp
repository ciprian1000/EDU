#include <iostream>

/* FUNCTIONS
We have already seen functions before. In fact main() is a function.
Functions are a way for programmers to organize their work and also
reuse code.
*/

//A function has a few elements to it:
void SimpleFunction();
//It has a return type, in this case "void"
//It is then followed by a name "SimpleFunction"
//And the operator "()"; some functions also have parameters between ( and )
//Parameters can be seen as variables provided to the function
//This function does not have it's body defined here; before we 
//can use it, we need to provide the implementation, or write the code 
//of the function

float SimpleFunctionWithParameters(float param1, float param2) {
	//This function has it's body defined immediatelly 
	//It has a float return type and 2 parameters of type float
	//These parameters can be accessed by their name just like variables

	const float sum = param1 + param2;
	std::cout << "Param 1: " << param1 << std::endl;
	std::cout << "Param 2: " << param2 << std::endl;

	//return is a special instruction that tells the function to interrupt 
	//at that point and set the return value to whatever you put after.
	return sum;
}

//In order to use this function in main(), it requires at least the definition
//The implementation can be done later, as in this case;
void Exercises();

//As mentioned before, main is a special function that is the entry point 
//of the program; that means that whatever else you have in the file,
//execution of the program always starts at line 1 in the main() function
int main() {
	/*As mentioned before, programmers like to organize their code in 
	smaller units of code like functions, and as we'll see later, classes.
	This makes it easy to test the pieces of a great and complex system.
	As some projects can get to millions of lines of code, it's much easyer
	to look at blocks of 10-20 lines and understand how they work*/

	/*The second use of functions is reusability of code.
	Imagine that you have pairs of numbers that you need to print to the
	console and then their sum and also keep this sum for later use
	If you have 10 such pairs, you would need to copy paste the same
	4 lines of code over and over. It's much easier to write a 4 lines function
	with parameters and a return type;
	*/
	SimpleFunctionWithParameters(1.1, 1.2);
	SimpleFunctionWithParameters(1.2, 1.3);
	SimpleFunctionWithParameters(1.3, 1.4);
	SimpleFunctionWithParameters(1.4, 1.5);
	SimpleFunctionWithParameters(1.5, 1.6);
	SimpleFunctionWithParameters(1.6, 1.7);
	SimpleFunctionWithParameters(1.7, 1.8);
	SimpleFunctionWithParameters(1.8, 1.9);
	SimpleFunctionWithParameters(1.9, 1.8);
	SimpleFunctionWithParameters(1.4, 1.2);
	//This will do the same operations but with much less code

	Exercises();
}

void SimpleFunction() {

}

//INSERT CODE HERE:

void Exercises() {
	/*Uncomment the following code and implement the functions used in this
	block. Try declaring the function name before this function
	and the code body after, and also try implementing the function
	along with it's body before this function*/

	/*std::cout << "Adding 2 numbers: " << AddNumbers(1, 5) << std::endl;
	std::cout << "Doubling a number: " << DoubleNumber(7.5) << std::endl;

	PrintSomethingNice("Something nice");*/
}

//AND MAYBE SOME CODE HERE:


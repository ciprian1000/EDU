#include <iostream>

/*LOOPS
These are very a important feature of the language that allows us to
run code over and over again without copy-pasting x times;
*/

void PrettyPrint(const char* message, const int& n);
void PrettyPrint(const char* message, const int* n, const unsigned int size);
void Exercises();

int main() {
	{ //for loop
		for (int i = 1; i <= 100; i++) {
			PrettyPrint("Running loop number ", i);
		}

		//for loops take 3 expressions:
		for (
			int i = 1; //Initialization happens only once at the begin of the for loop
			i <= 100; //Condition is checcked before each execution of the block
			i++ //Increment happens after each execution of the block
		) {
			PrettyPrint("Running for loop number ", i);
		}

		/*Order of the operations:
		1) Initialization;
		2) Check condition;
		3) If true, execute code block;
		4) Execute increment;
		5) Check condition;
		6) If true, execute code block;
		7) Execute increment;
		...repeat until condition is false...
		n) Exit loop
		*/
	}

	{ //while loop
		int i = 1;
		const int max = 100;
		bool condition = (i <= 100);
		while (condition) {
			PrettyPrint("Running while loop number ", i);
			i++;
			condition = (i <= 100);
		}

		/*The result of this loop is the same as before
		but we have to write a lot more code*/

		/*while loops have a condition that they check before every
		execution of the block.*/
	}

	{ //do-while loops
		int i = 1;
		const int max = 100;
		bool condition = (i <= 100);
		do
		{
			PrettyPrint("Running while loop number ", i);
			i++;
			condition = (i <= 100);
		} while (condition);

		/*The same result with a do-while loop
		do-while loops are slightly different from while loops
		because of the fact that they will execute at least once.
		The condition check happens after the execution of the block
		and it decides if a new run is necessary. In contrast, a 
		while loop with a false initial condition will not execute
		the block code.
		*/
	}

	{ //break and continue
		for (int i = 1; i <= 100; i++) {
			PrettyPrint("Running loop number ", i);
			if (i == 3) {
				std::cout << "Breaking here!" << std::endl;
				break;
			}
		}
		//break is an instruction that will stop the loop immediately

		for (int i = 1; i <= 100; i++) {
			if (i % 5 != 0) { //i % 5 is called modullo and is the rest of the division
				/*essentially this continue code executes for every i that is not a multiple
				of 5 (i % 5 != 0)*/
				continue;
			}
			PrettyPrint("Running loop number ", i);
			/*This will run PrettyPrint only for i that is multiple of 5*/
		}
		/*the continue instruction forces the current loop execution to stop
		and then the next step is executed, if the condition is true*/
	}

	Exercises();
}

void Exercises() {
	constexpr unsigned int size = 10;
	{ //Use a for loop to initialize the array to {0, 1, 2...9}
		int	myArray[size];
		//INSERT CODE HERE:

		PrettyPrint("Array: ", myArray, size);
	}

	{ //Use a while loop to initialize the array to {9, 8, 7...0}
		int	myArray[size];
		//INSERT CODE HERE:

		PrettyPrint("Array: ", myArray, size);
	}

	{ /*Use a for loop to print all the numbers that respect the conditions: 
	  1) x = 3xa + 2 (a is int)
	  2) x < 100*/
	  //INSERT CODE HERE:

	}
}

void PrettyPrint(const char* message, const int& n) {
	std::cout << message << n << std::endl;
}

void PrettyPrint(const char* message, const int* n, const unsigned int size) {
	std::cout << message << "{ ";
	for (int i = 0; i < size; i++) {
		std::cout << n[i] << ' ';
	}

	std::cout << '}' << std::endl;
}

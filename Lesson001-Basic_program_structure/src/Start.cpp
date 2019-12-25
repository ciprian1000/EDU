/* INTRO
Welcome to your first C++ lesson. This lesson explains the basic 
structure of a program.

A program is made up of a series of instructions that execute sequentially one 
after another.
A program can contain code, white spaces and comments. White spaces and 
comments do not get compiled, but they can help with readability.
*/

/* COMMENTS
As we will be using lots of comments in this tutorial, let's go through
these first.
There are 2 styles of comments; this block is a "/ + *"...comment..."* + /"
The second type of comment is a line comment. Add // at any point in the file
to comment everything from that point to the end of the line.
Often times when using an IDE (Integrated development environment) like
Visual studio or Eclipse, the comments will be printed with a different color.
Try to identify this color as it will help you understand what is part of the
program and what is a comment. 
*/

// This is a line comment

/* This is a block comment */

//--------------------------------------------------------------------------

#include <iostream> /* don't worry about this line for now. we'll cover includes
in later lessons */

//--------------------------------------------------------------------------

/* CODE
Now let's talk about the code. I mentioned earlier that instructions get 
executed sequentially; this is true, but I didn't mention the entry point
of the execution.
Every program needs to know what is the first instruction to be executed,
and in C++ we have a convention that the entry point in the program is the
main() function. This function is supposed to call the instructions that 
make up the program.
*/

/* TERMINOLOGY
COMPILE - you will often hear programmers that they are compilling their code;
this is in fact wrong, what they mean to say is that they are attempting 
to BUILD the program;
BUILDING - is the process of transforming the source code into an executable
program; this process has a few phases one of which is the compile phase;
compiling the code will check the correctness of the source code, and if 
any part of it is wrong, or not understood by the compiler, you will get
an error. Most times you will get the line and description of the error,
but there will be cases when you need to search google or ask someone
how to fix a certain problem.
We will talk about the phases of the build process in more detail in the future
lessosns, as that is an advanced topic.
*/

/* This is a function; for now just look at it as
an instruction that can be executed by our program;
*/
void InstructionOne() {
	//the following line writes a text in the standard output:
	std::cout << "Executing instruction one..." << std::endl;
}

void InstructionTwo() {
	//the following line writes a text in the standard output:
	std::cout << "Executing instruction two..." << std::endl;
}

void InstructionThree() {
	//the following line writes a text in the standard output:
	std::cout << "Executing instruction three..." << std::endl;
}

//--------------------------------------------------------------------------

void main() { // This is the main function, the starting point of this program
	InstructionThree();

	InstructionOne();

	InstructionTwo();

	InstructionThree();

	InstructionTwo();
}

//--------------------------------------------------------------------------

/*
By compiling and executing this program you will see the order of execution 
for the 3 instructions;
The execution starts in the main() function and it will execute line by line
until the end of this function.
Although the instructions were written in order from 1 to 3, the main()
function calls them in a different order, and that is the order they are 
called in.
*/

/* EXERCISES
If the order of execution in this program is not clear yet, you should
try to move around the instructions before compile and execute. By checking
the result of the program, you will see that the output has changed to reflect
your changes to the program.
*/
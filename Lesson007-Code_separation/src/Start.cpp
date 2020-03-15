/*Code separation
A typical C++ project can have anywhere from 100k to a few million
lines of code. It is for this reason that this code doesn't reside
in the same file. Programmers like to separate the code in different
files based on their functionality. More than that, C++ allows two 
types of code files:
1) Header files usually have the extension .h, .hpp or none at all;
These files usually contain the declaration of functions but not the
implementation;
2) Source files usually end in .c or .cpp; they contain the implementation
of the functions declared in the header; these files are the ones being
used by the compiler which will generate a compile unit for each file.

SEPARATING CODE LIKE THIS WILL DECREASE THE COMPILE TIME.
*/

#include <iostream> //this is a header file; it has no extension because
					//it is part of the standard library

#include "MyFirstHeaderFile.h"

/*Navigate to the MyFirstHeaderFile.h and MyFirstSourceFile.cpp
for more details*/

void Exercises();

int main() {
	PrettyPrint("Where is this function comming from? ", 100);

	/*As you can see, the PrettyPrint function is not defined or declared
	in this file. We use the #include "MyFirstHeaderFile.h" to let the
	program know that there is more code to be linked here.*/
}

void Exercises() {
	/*Write your own PrettyPrint function that will take 2 float numbers and a message
	and then uncomment the following code:
	*/
	//PrettyPrint("Hey, I'm doing this!! ", 10.3f, 1.11f);
}

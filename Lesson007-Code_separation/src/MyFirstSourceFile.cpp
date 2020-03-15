#include "MyFirstHeaderFile.h"
/*All instructions that start with # are used by the precompiler
to know what to do before the compilation starts.
#include is by far the most used precompiler instruction, so
it's a good idea to understand what it does.
By using #include "header.h" we instruct the precompiler to copy the 
contents of header.h in-place on the #include line.
Since the includes are used by our program to know about code that exists
elsewhere, and because the order of our instructions is important,
it is a good practice to have all the includes at the beginning of the file.

The compiler is a very linear program, it parses files line by line
and it only knows about the code that it has already encountered.
If it finds references to other code, it will generate an error.

An include that is written after one instruction that requires it, might 
generate a compiler error, because the compiler doesn't know about that
instruction.
*/

#include <iostream>

void PrettyPrint(const char* message, const int& n) {
	std::cout << message << n << std::endl;
}

//INSERT CODE HERE:

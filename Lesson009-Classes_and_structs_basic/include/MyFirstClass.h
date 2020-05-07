/*
A class is a container of data and code that acts together as a separate
entity.

Inside a class, the data and functions (often calles methods), may have
one of 3 access modifiers:
1) private: the data and functions can be accessed only from inside the class
2) protected: the data can only be accessed from inside the class and derived classes (we'll come back to those)
3) public: the data and functions can be accessed from anywhere.

In the beginning of a class if we don't specify an access modifier, the default is private
*/

class MyFirstClass {
	int somePrivateData; //this is private

public:
	int x = 0;
	float y = 0.0f;
	/*Once an access modifier has been used, all the following data and functions will 
	benefit from it until another one is specified.*/
	double z = 0.0;
	//x, y and z are all public.

protected:
	int PrettyPrint();
	int a = 1;
	//both the function and a are protected

public: //we can specify an access modifier more than once, although this will make the code
	    //more complicated

	float someMoreStuffHere = 15.4f;

private: //this is the most restrictive access modifier
	int b = 0;
	int c = 0;

public:
    MyFirstClass(); //this is a special function called a constructor
    MyFirstClass(int i); //this is a constructor with parameters
    
    ~MyFirstClass(); //this is a special function called a destructor;
    //there can be only one destructor and it cannot have any parameters

    void RandomFunction(int i);

}; //don't forget the ";" at the end of a class declaration;

/*A few good practices:
1) Separate the class in header / source files
   Doing this will allow the use of this class in another file through including; remember that
   source files cannot be included, only headers.
   Headers should contain the definition and source files should contain the function implementations.
   It is possible to write the entire class inside the header, but this is not reccommended. It will
   create huge headers that wiull increase the compile time and will be difficult to debug.
   Many times the header is written and then stays the same for the duration of the project. It's only
   the content of the functions, the actual code, that will change. When this happens, if the code is 
   in a .cpp file, only that file needs to recompile. If it's in a header file, all the files that 
   include it will have to recompile.
   EXCEPTION: Templated classes (we'll come back to them in a future lesson) - they cannot be separated
   into header / source, they have to be written entirely in the header file.

2) As much as possible keep one class per file; doing this will allow you to name the class the same or
   similar to the file;
   Ex: the file is called MyFirstClass.h / MyFirstClass.cpp so you could name your class CMyFirstClass
   This will allow you to remember where a class is and give you better navigation in the project.
   Many professional projects contain thousands or even hundreds of thousands of classes. Knowing
   which files they are in is an advantage.

3) If a class is only needed localy in another class, often called a private class, it can be written 
   entirely in the .cpp file
*/
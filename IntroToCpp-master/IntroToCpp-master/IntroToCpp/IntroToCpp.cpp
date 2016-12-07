/*
	Author: Elliot Yoon from FRC Team 4139
	A project intended to cover all the topics in C++ that is required to program the robot.
	I will update this if anything else is needed. Change log is at the bottom. It's a weird place to put it, but it makes less clutter up here.

	Table of Contents: (use Control+F to find these)
	- #BASICS : Intro to C++
	- #IF STATEMENTS : If statements, which check for a condition then run based on if it is true or false
	- #LOOPS : Loops code. Probably won't be using these in the robot code but loops are important to programming.
	- #OBJECTS : Objects hold various data and methods. An important part to C++ any other object oriented programming language (such as Java).
	- #POINTERS : Points to a memory address. We will primarily be using these in the robot code.
	- #STRUCTS : Similar to classes. Holds data.
	- #ENUMS : Holds a set of defined ints.

	Any additional files (.cpp or .h) should be in the Header Files or Source Files folder.
*/

// #include statements include libraries or other files with other code
#include "stdafx.h" // required for Visual Studio only
#include <iostream> // lets you output/take input (cout and cin)
#include <string> // allows you to use strings (std::string)
#include "ObjectWithoutHeader.cpp" // includes the .cpp file which has our ObjectWithoutHeader class
#include "ObjectWithHeader.h" // includes the .h file which has our ObjectWithHeader header file

int main() // the main method which is run when the program is run
{
	// --------- #BASICS ----------
	std::cout << "---Starting #BASICS..." << std::endl; // \n is an escape character, creates a new line

	/*
		Some basics.
		ints hold whole numbers.
		floats hold decimal points.
		std::string holds characters and numbers and is part of the std namespace.

		std::cout prints, std::endl creates a newline.
		std::cout << "stuff printed inside these quotes" << std::endl;

		std::cin takes an input and assigns it to a variable.
		std::cin >> something;
	*/

	// This is a single line comment. Comments are never run. Use it to note what the code does or temporarily remove some code.

	/*
		This is a block comment. Everything within the slash and star will be a comment.
	*/

	int intOne; // creates an int called intOne
	float floatOne; // creates a float called floatOne
	std::string stringOne; // creates a string called stringOne

	std::cout << "Enter  a number for intOne:" << std::endl; // Prints out a message
	std::cin >> intOne; // Takes in an input and assigns it to intOne
	std::cout << "intOne is: " << intOne << std::endl; // prints a message then intOne

	std::cout << "Enter a float for floatOne:" << std::endl; // similar as above, but for floatOne
	std::cin >> floatOne;
	std::cout << "floatOne is: " << floatOne << std::endl;

	std::cout << "Enter a string for stringOne:" << std::endl; // similar as above, but for stringOne
	std::cin >> stringOne;
	std::cout << "stringOne is: " << stringOne << std::endl;

	// ---------- #IF STATEMENTS ----------
	std::cout << "\n---Starting #IF STATEMENTS..." << std::endl;

	/*
		If statements check if the expression with the paranthesis are true or false (boolean expressions).
		If blocks consist of one if statement, and usually multiple else ifs, and one else statement.
		The first if is always checked; if it is false, it moves on to any else ifs if any; then if all the above are false, then the else is run last.
	*/

	if (intOne == 1) // if intOne equals 1, then run the following code; if not, then it moves on to the next part of the if block
	{ // note we have to use double equals. A single equals is the assignment operator that sets a variable to a value.
		std::cout << "You entered a 1!" << std::endl;
	}
	else if (intOne == 2) // if the first if statement is false, then it runs else if. If intOne equals 2, then run the following code. If not, move on.
	{
		std::cout << "You entered a 2!" << std::endl;
	}
	else if (intOne == 3) // you can have multiple else ifs in an if block, but only one if and else
	{
		std::cout << "You entered a 3!" << std::endl;
	}
	else // the else is run last. It is only run if all if/else if statements are false.
	{
		std::cout << "You didn't enter a 1 or 2..." << std::endl;
	}

	// ---------- #LOOPS ----------
	std::cout << "\n---Starting #LOOPS..." << std::endl;

	/*
		Loops loop a code. The two loops we primarily use are for loops and while loops.
		while loops loop while the expression is true. They stop looping and move on when it is false.
		for loops create a variable (usually an int) and continue to loop until it meets the expression in the second part. Each loop increaes that int.
	*/

	while (intOne != 4139) // loop while intOne does NOT equal 4139
	{
		// #BUG : There seems to be a random bug where sometimes cout will run infinitely without waiting for input. Just restart the program.
		std::cout << "You didn't enter 4139! Try again!" << std::endl;
		std::cin >> intOne;
	}

	for (int i = 0; i < 6; i++) // create an int called i, set it to 0; loop while i is less than 6; increase i by one each time it loops
	{
		std::cout << "i: " << i << std::endl; // prints the i
	}

	// ---------- #OBJECTS ----------
	std::cout << "\n---Starting #OBJECTS..." << std::endl;

	/*
		Objects are an important concept to object oriented programming (OOP) languages such as C++.
		Objects hold methods and data, and we operate on these objects.
	*/

	ObjectWithoutHeader objWo(intOne); // constructs an ObjectWithoutHeader object called objWo, pass in intOne
	int objWoInt = objWo.GetIntA(); // set a new int called objWoInt to whatever GetIntA() returns
	std::cout << "objWo created with " << objWoInt << std::endl; // prints that int
	std::cout << "Changing objWo's int to 123" << std::endl;
	objWo.SetIntA(123); // sets the int inside objWo to 123
	objWoInt = objWo.GetIntA(); // objWoInt is assigned whatever GetIntA() returns
	std::cout << "objWo created with " << objWoInt << std::endl; // prints that int

	std::cout << std::endl;

	ObjectWithHeader objW(floatOne); // cosntructs an ObjectWithHeader object called objW, pass in floatOne
	float objWFloat = objW.GetFloatB(); // sets a new float called objWFloat to whatever GetFloatB() returns
	std::cout << "objW created with " << objWFloat << std::endl; // prints that float
	std::cout << "Changing objW's float to 3.14" << std::endl;
	objW.SetFloatB(1.23); // sets the float inside objW to 1.23
	objWFloat = objW.GetFloatB(); // objWFloat is assigned to whatever GetFloatB() returns
	std::cout << "objWo created with " << objWFloat << std::endl; // prints that float

	// ---------- #POINTERS ----------
	std::cout << "\n---Starting #POINTERS..." << std::endl;

	/*
		& is the address-of operator. It returns the memory address.
		* can mean two things:
			- It can either be the dereference operator, which gives us the actual data of whatever the pointer points to. (*something)
			- Or it can be used to create a pointer. (dataType *aPointer)
	*/

	int *intOnePointer = &intOne; // We create a pointer called intOnePointer and point to the memory address of intOne.
	std::cout << "The memory address which intOnePointer points to: " << intOnePointer << std::endl; // using the pointer directly gives us the memory address
	std::cout << "The actual data to which intOnePointer points to: " << *intOnePointer << std::endl; // using the deference operator gives us the actual data

	std::cout << std::endl;

	/*
		constructor syntax is ObjectType *pointerName = new ObjectType(stuff)
		when using methods with pointers, you use -> instead of the dot (.) . This is a shortcut for (*pointer).method()
		otherwise, they work pretty simiarily.
		IMPORTANT: most objects we use in robot code will be using pointers. Learn this.
	*/

	ObjectWithoutHeader *PobjW = new ObjectWithoutHeader(777); // we create a pointer PobjW that points to the object. Construct the object with 777.	
	int PobjWoInt = PobjW->GetIntA(); // set a new int called PobjWoInt to whatever GetIntA() returns
	std::cout << "PobjW constructed with " << PobjWoInt << std::endl; // prints that int
	std::cout << "Changing PobjW's int to 766" << std::endl;
	PobjW->SetIntA(766); // sets the int inside PobjW to 123
	PobjWoInt = PobjW->GetIntA(); // PobjWoInt is assigned whatever GetIntA() returns
	std::cout << "PobjW created with " << PobjWoInt << std::endl; // prints that int

	// ---------- #STRUCTS ----------
	std::cout << "\n---Starting #STRUCTS..." << std::endl;

	/*
		structs are similar to a class; in fact they are nearly identical.
		Differences:
			- By default a struct is public, while a class is private. (meaning without private: or public: it will automatically use the default)
			- structs are generally used to hold data
	*/

	// Here I will use a struct that is inside ObjectWithoutHeaderStruct
	ObjectWithoutHeaderStruct objWoStruct; // creates a ObjectWithoutHeaderStruct called objWoStruct
	std::cout << "Setting int y and z inside objWoStruct to 0..." << std::endl;
	objWoStruct.y = 0; // sets int y to 0
	objWoStruct.z = 0; // sets int z to 0
	std::cout << "Running AddToZ, passing in 5" << std::endl;
	objWoStruct = objWo.AddToZ(objWoStruct, 5); // runs AddToZ inside ObjWo (ObjectWithoutHeader). Passes in the struct we created earlier and a number. Returns a new struct with the modified data.
	std::cout << "int z inside objWoStruct is now: " << objWoStruct.z << std::endl; // prints int z inside objWoStruct

	// ---------- #ENUMS ----------
	std::cout << "\n---Starting #ENUMS..." << std::endl;

	/*
		enums allow programemrs to create their own data types. These are represented using ints.
		The FRC WPILib API uses some enums, so it's good to learn how to use these.
	*/

	// the following enum is within ObjectWithoutHeader
	std::cout << "Creating an enum..." << std::endl;
	ObjectWithoutHeaderEnum enumOne = OBJECTWITHOUTHEADERENUM_NEGONE; // creates an ObjectWithoutHeaderEnum called enumOne that is set to OBJECTWITHOUTHEADERENUM_NEGONE
	std::cout << "enumOne is: " << enumOne << std::endl;

	// ---------- END ----------
	std::cout << "\n\n\n---That is the end of this program!" << std::endl;
	system("PAUSE"); // to stop Visual Studio from closing your program automatically
	return 0; // must return an int for the int main() method, returns a 0 which means everything went well
}

/*
	Change log:
	- v1.0.0 (01/14/2015): Initial creation.
	- v1.0.1 (01/14/2015): Fixed a minor typo.
	- v1.0.2 (01/15/2015): Changed version numbering system.
*/
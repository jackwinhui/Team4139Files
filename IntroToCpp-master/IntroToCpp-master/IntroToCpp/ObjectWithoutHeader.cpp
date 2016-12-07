#include "stdafx.h"

// create a struct called ObjectWithoutHeaderStruct
struct ObjectWithoutHeaderStruct
{
	// by default public members
	int y;
	int z;
};

// creating an enum called ObjectWithoutHeaderEnum
enum ObjectWithoutHeaderEnum
{
	// By default enums start with 0. I can change that to start at whatever int.
	// Each one goes up one int.

	OBJECTWITHOUTHEADERENUM_NEGTWO = -2,
	OBJECTWITHOUTHEADERENUM_NEGONE, // will be -1 automatically
	OBJECTWITHOUTHEADERENUM_ZERO, // will be 0 automatically
	OBJECTWITHOUTHEADERENUM_POSONE = 1, // setting it to 1
	OBJECTWITHOUTHEADERENUM_POSTWO // will be 2 automatically

	// as you can see, these are generally named ENUMNAME_NAME
};

class ObjectWithoutHeader
{
private: // private members CANNOT be accessed outside this object; usually have variables
	int a; // all variables should be private; we will access/set these with Get/Set methods below

public:  // public memebers can be accessed by any part of your code; usually have methods
	// constructor; constructs an ObjectWithoutHeader object and takes an int
	ObjectWithoutHeader(int input)
	{
		a = input; // sets the private int a to the input
	}

	// Methods follow this syntax: returnType methodName(parameterType parameterName)
	// sets the int to something. The return type is void because it only sets; it does not need to return anything. Takes in an int to set.
	void SetIntA(int input)
	{
		a = input; // setse the private int a to the input
	}

	// returns the int. The return type is an int so other parts of the program can access this private int. No parameters because it does not need to set anything.
	int GetIntA()
	{
		return a; // returns the private int a. This method allows us to access this.
	}

	ObjectWithoutHeaderStruct AddToZ(ObjectWithoutHeaderStruct tempStruct, int input)
	{
		tempStruct.z += input;
		return tempStruct;
	}
};
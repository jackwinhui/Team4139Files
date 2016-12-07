#include "stdafx.h"
#include "ObjectWithHeader.h" // must include the accompanying header file

// syntax is Class::Method(stuff). These methods belong to that class.

// the constructor; constructs an ObjectWithoutHeader object and takes an int
ObjectWithHeader::ObjectWithHeader(float input)
{
	b = input; // note we can use the private variables since we are still within the same class
}

// the SetFloatB method. sets the float to something. The return type is void because it only sets; it does not need to return anything. Takes in a float to set.
void ObjectWithHeader::SetFloatB(float input)
{
	b = input;
}

// the GetFloat B method. returns the float. The return type is a float so other parts of the program can access this private float. No parameters because it does not need to set anything.
float ObjectWithHeader::GetFloatB()
{
	return b;
}
#ifndef OBJECTWITHHEADER_H // header files like these must start with these lines
#define OBJECTWITHHEADER_H // usually HEADERFILENAME_H

/*
	Header files separate the declaration (method name, etc) from the implementation (code).
	This allows a programmer to know how to use these methods without looking at the clutter of the implementation.
*/

class ObjectWithHeader
{
private: // private members CANNOT be accessed outside this object; usually have variables
	float b; // all variables should be private; we will access/set these with Get/Set methods below

public: // public memebers can be accessed by any part of your code; usually have methods
	// here we are declaring these methods, basically telling the compiler that we can use these methods and they exist.
	// we actually implement (write the code) in the .cpp file.

	ObjectWithHeader(float input); // declaring the constructor
	void SetFloatB(float input); // declaring the SetFloatB method
	float GetFloatB(); // declaring the GetFloatB method
};

#endif OBJECTWITHHEADER_H // must end with this line
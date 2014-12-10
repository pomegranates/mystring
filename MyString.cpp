//****************************************************************************
//
//                                    MyString
//
//****************************************************************************


 
 
// ===========================================================================
//                                   Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <cstring>


// ===========================================================================
//                                 Project Files
// ===========================================================================
#include <cstring>
#include "MyString.h"



//############################################################################
//                                                                           #
//                                Class  MyString                            #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                  Constructors
// ===========================================================================
MyString::MyString(void)
{
}

MyString::MyString(const char* c)
{
	chars_length = 0;
	int i;

	//We define the length of the string
	for(i = 0 ; c[i] != '\0' ; i++)
	{
		chars_length++;
	}	

	mem_length = chars_length;
	chars = new char [mem_length];

	//We copy the c_string in our object
	memcpy(chars,c,mem_length);
}

MyString::MyString (const MyString& str)
{
	mem_length = str.mem_length;
	chars_length = str.chars_length;
	chars = new char [mem_length];
	memcpy(chars, str.chars, mem_length*sizeof(*chars));

}


// ===========================================================================
//                                  Destructor
// ===========================================================================
MyString::~MyString(void)
{
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
void MyString::resize(size_t n)
{
	//First case, if we want to broaden the string
	if(n > mem_length)
	{
 		char* temp_chars = new char(n);
	 	int i;
	 	for(i=0;i<n;i++)
	 	{
	 		//Copy existing characters
	 		if(i<mem_length)
	 		{
				temp_chars[i]=chars[i];
	 		}
	 		//Complete with null characters
	 		else
	 		{
	 			temp_chars[i]='\0';
	 		}
	 	}
	 	//Replace the object characters by the new ones
	 	delete [] chars;
	 	chars = temp_chars;
 	}

 	//If we want to shrink the string
	if(n < mem_length)
	{
		char* temp_chars = new char(n);
	 	int i;
	 	//Copy the first n characters
	 	for(i=0;i<n;i++)
	 	{
			temp_chars[i]=chars[i];
	 	}
	 	//Replace the object characters by the new ones
	 	delete [] chars;
	 	chars = temp_chars;
	 	chars_length = n;
	}

	mem_length= (int) n;
}

void MyString::resize(size_t n, char c)
{
	//First case, if we want to broaden the string
	if(n > mem_length)
	{
 		char* temp_chars = new char(n);
	 	int i;
	 	for(i=0;i<n;i++)
	 	{
	 		//Copy existing characters
	 		if(i<chars_length)
	 		{
				temp_chars[i]=chars[i];
	 		}
	 		//Complete with c characters
	 		else
	 		{
	 			temp_chars[i]=c;
	 		}
	 	}
	 	//Replace the object characters by the new ones
	 	delete [] chars;
	 	chars = temp_chars;
 	}

 	//If we want to shrink the string
	if(n < mem_length)
	{
		char* temp_chars = new char(n);
	 	int i;
	 	//Copy the first n characters
	 	for(i=0;i<n;i++)
	 	{
			temp_chars[i]=chars[i];
	 	}
	 	//Replace the object characters by the new ones
	 	delete [] chars;
	 	chars = temp_chars;
	}

	chars_length = n;
	mem_length= (int) n;
}

char* MyString::c_str (void)
{
	char* output = new char [1+chars_length];
	int i;
	for (i=0 ; i<chars_length ; i++)
	{
		output[i] = chars[i];
	}
	output[chars_length] = '\0';
	return output;
}


void MyString::clear (void)
{
	delete(chars);
	mem_length = 0;
	chars_length = 0;
	chars = new char [0];
}



// operator =
MyString& MyString::operator= (const MyString& model)
{
	MyString* output = new MyString(model);
	return *output;
}

MyString& MyString::operator= (char c)
{
	const char* temp_chars = c+"\0";
	//Here the number of null character at the end of the c_string should be AT LEAST ONE
	//(but could be more) to create an object MyString using the c_string-based constructor
	return *(new MyString(temp_chars));
}


// operator + : appending a char to an existing string
MyString MyString::operator+ (char right)
{
    // length of the resulting string
    int nbchars = chars_length +2;

    // we reserve the memory for the resulting string
    char* newstring = new char [nbchars];

    // then the new data is added
    memcpy (newstring, chars, chars_length*sizeof(*chars));
    newstring[nbchars-2] = right;
    newstring[nbchars-1] = '\0';

    // finally the resulting string is created and returned
    MyString* output = new MyString(newstring);
    return *output;
}

MyString MyString::operator+ (char* right)
{
	MyString* rightString = new MyString(right);
	MyString* resString = new MyString(*(this) + *(rightString));
	return *resString;
}

MyString MyString::operator+ (const MyString& rightString)
{
	int nbchars = this->chars_length + rightString.chars_length;
	char* newChars = new char[nbchars+1];
	int i,j;

	// Copy the characters of the first string
	for(i = 0; i < this->chars_length; i++)
	{
		newChars[i] = this->chars[i];
		j = i;
	}

	// Copy the characters of the second string
	for(i = 0; i < rightString.chars_length; i++)
	{
		newChars[j+i+1] = rightString.chars[i];
	}

	// Null character to format this string as a c_string
	newChars[nbchars] = '\0';

	// Return a MyString created from the generated c_string
	return *(new MyString(newChars));
}


// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================

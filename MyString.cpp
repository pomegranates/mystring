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


MyString& MyString::operator= (const MyString& model)
{
	MyString* output = new MyString(model);
	return *output;
}


// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================

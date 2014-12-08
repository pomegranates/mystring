//****************************************************************************
//
//                                    MyString
//
//****************************************************************************


 
 
// ===========================================================================
//                                   Libraries
// ===========================================================================



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
	for(i = 0 ; chars[i] != '\0' ; i++)
	{
		chars_length++;
	}	

	mem_length = chars_length;
	chars = new char [mem_length];

	//We copy the c_string in our object
	memcpy(chars,c,mem_length);
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
	 		if(i<mem_length)
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

	mem_length= (int) n;
}

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================

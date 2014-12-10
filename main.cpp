//****************************************************************************
//
//                     Main
//
//****************************************************************************
 
 
 
 
// ===========================================================================
//                               Include Libraries
// ===========================================================================
#include <stdlib.h>
#include <stdio.h>
#include "MyString.h"



// ===========================================================================
//                             Include Project Files
// ===========================================================================



// ===========================================================================
//                         Declare Miscellaneous Functions
// ===========================================================================







// ===========================================================================
//                                   The Main
// ===========================================================================
int main(int argc, char* argv[])
{

    int i;

	char* c_s1 = "Popopo";
	MyString* s1 = new MyString(c_s1);               // calling constructor from a char*
	MyString* s2 = new MyString("Pomegranates");     // calling constructor from a char*
	MyString* s3 = new MyString(*s2);                // calling copy constructor

	printf("This is s3 : ");
    for (i=0 ; i<s3->length(); i++)
    {
    	printf("%c", s3->at(i));
    }
    printf("\n");

	printf("s1 length: %d !\n", s1->length());
	printf("s2 length:%d !\n", s2->length());
	printf("s3 length:%d !\n", s3->length());
	printf("s2 address: %d\n", s2);

	printf("s3 address: %d\n", s3);
	s3->resize(3);                                   // truncation
	printf("s3 length:%d !\n", s3->length());
	s3->resize(4);                                   // increasing memory size by adding null characters
	printf("s3 length:%d !\n", s3->length());
	s3->resize(6,'c');                               // increasing memory size by adding 'c'
	printf("s3 length:%d !\n", s3->length());
	// calling 'c_str' method
	printf("s3[0-5] : %c%c%c%c%c%c...\n", (s3->c_str())[0], (s3->c_str())[1], (s3->c_str())[2], (s3->c_str())[3], (s3->c_str())[4],(s3->c_str())[5]);
	s3->clear();                                     // calling clear method
	printf("s3 length:%d !\n", s3->length());
	printf("s2 length:%d !\n", s2->length());
	s3->resize(8,'c');                               // increasing memory size by adding 'c'
	printf("s3 length:%d !\n", s3->length());
	*s1 = *s3;                                       // testing operator = (MyString)
	printf("%c\n",s1->at(0));


	printf("s1 length:%d !\n", s1->length());
	printf("s1 address: %d\n", s1);
	printf("s3 address: %d\n", s3);

	// calling 'at' method
	printf("s1[0-3] : %c %c %c %c\n", (s1->c_str())[0], (s1->c_str())[1], (s1->c_str())[2], (s1->c_str())[3]);
	printf("s3[4-7] : %c %c %c %c\n", s3->at(4), s3->at(5), s3->at(6), s3->at(7));
	*s1 = 'p';

    // testing destructor
	delete s3;


    /*MyString* s4 = new MyString(c_s1);
    char charx = 'x';
    *s4 = (*s1) + charx;*/
	MyString* s4 = new MyString((*s1) + 'x');       // testing operator + (char)
	printf("s4 length:%d !\n", s4->length());

	printf("This is s4 : ");
    for (i=0 ; i<s4->length(); i++)
    {
    	printf("%c", s4->at(i));
    }
    printf("\n");


    MyString* s5 = new MyString((*s1) + (*s2));    // testing operator + (MyString)
	printf("s5 length:%d !\n", s5->length());

	printf("This is s5 : ");
    for (i=0 ; i<s5->length(); i++)
    {
    	printf("%c", s5->at(i));
    }
    printf("\n");


    *s5 = ((*s5) + *(c_s1));                      // testing operator + (char*)
	printf("s5 length:%d !\n", s5->length());

	printf("This is s5 : ");
    for (i=0 ; i<s5->length(); i++)
    {
    	printf("%c", s5->at(i));
    }
    printf("\n");

 	return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================


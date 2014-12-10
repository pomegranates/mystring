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

	char* c_s1 = "Popopo";
	MyString* s1 = new MyString(c_s1);
	MyString* s2 = new MyString("Pidipip");
	MyString* s3 = new MyString(*s2);

	printf("s1 length: %d !\n", s1->length());
	printf("s2 length:%d !\n", s2->length());
	printf("s3 length:%d !\n", s3->length());
	printf("s2 address: %d\n", s2);
	delete s2;
	printf("s3 address: %d\n", s3);
	s3->resize(3);
	printf("s3 length:%d !\n", s3->length());
	s3->resize(4);
	printf("s3 length:%d !\n", s3->length());
	s3->resize(6,'c');
	printf("s3 length:%d !\n", s3->length());
	printf("s3[0-5] : %c%c%c%c%c%c...\n", (s3->c_str())[0], (s3->c_str())[1], (s3->c_str())[2], (s3->c_str())[3], (s3->c_str())[4],(s3->c_str())[5]);
	s3->clear();
	printf("s3 length:%d !\n", s3->length());
	s3->resize(8,'c');
	printf("s3 length:%d !\n", s3->length());
	s1=s3;
	printf("s1 length:%d !\n", s1->length());
	printf("s1[0-3] : %c %c %c %c\n", (s1->c_str())[0], (s1->c_str())[1], (s1->c_str())[2], (s1->c_str())[3]);
	printf("s1[4-7] : %c %c %c %c\n", s1->at(4), s1->at(5), s1->at(6), s1->at(7));
	
 	return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================


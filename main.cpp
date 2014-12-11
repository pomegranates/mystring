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
	//for loops
    int i;

    // Default constructor
    MyString s1;
    MyString* s2 = new MyString();

    // String constructor
    char* c_str = "yoyo";
    MyString* s3 = new MyString(c_str);	

    // Copy constructor
    MyString* s4 = new MyString(*s3);

    // Accessors
    printf("s1 length: %d !\nmax s1 size: %f\n", s1.length(), s1.max_size());
    printf("s1 capacity : %d\n",s1.capacity());
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.size(); i++)
    {
    	printf("%c", s1.at(i));
    }
    printf("\n\n");

    printf("s2 length: %d !\nmax s2 size: %f\n", s2->length(), s2->max_size());
    printf("s2 capacity : %d\n",s2->capacity());
    printf("s2 size: %d\ns2 content: ",s2->size());
    for(i = 0; i < s2->size(); i++)
    {
    	printf("%c", s2->at(i));
    }
    printf("\n\n");

    printf("s3 length: %d !\nmax s3 size: %f\n", s3->length(), s3->max_size());
    printf("s3 capacity : %d\n",s3->capacity());
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->size(); i++)
    {
    	printf("%c", s3->at(i));
    }
    printf("\n\n");

    printf("s4 length: %d !\nmax s4 size: %f\n", s4->length(), s4->max_size());
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->size(); i++)
    {
    	printf("%c", s4->at(i));
    }
    printf("\n\n"); 

    // Resize, clear and c_str
    s1.resize(2);
    s2->resize(6, 'c');
    s3->resize(2,'c');
    s4->resize(6);
    printf("s4 capacity : %d\n",s4->capacity());
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
        printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");
    
    s4->clear();

    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
    	printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");

    printf("s2 capacity : %d\n",s2->capacity());
    printf("s2 size: %d\ns2 content: ",s2->size());
    for(i = 0; i < s2->length(); i++)
    {
    	printf("%c", (s2->c_str())[i]);
    }
    printf("\n\n");

    printf("s3 capacity : %d\n",s3->capacity());
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
    	printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");

    printf("s4 capacity : %d\n",s4->capacity());
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
    	printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");


    // = between 2 MyString
    *s2 = *s3;
    printf("s2 size: %d\ns2 content: ",s2->size());
    for(i = 0; i < s2->length(); i++)
    {
        printf("%c", (s2->c_str())[i]);
    }
    printf("\n\n");

    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");


    *s3 = "Pomegranates";
    printf("s2 size: %d\ns2 content: ",s2->size());
    for(i = 0; i < s2->length(); i++)
    {
        printf("%c", (s2->c_str())[i]);
    }
    printf("\n\n");

    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");


    s1 = *s3;
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");


    s1 = "Popopo";
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");


    *s2 = s1;
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");
    printf("s2 size: %d\ns2 content: ",s2->size());
    for(i = 0; i < s2->length(); i++)
    {
        printf("%c", (s2->c_str())[i]);
    }
    printf("\n\n");


    // = between a MyString and a char
    s1 = 'x';
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");

    *s4 = 'x';
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
        printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");


    // + between a MyString and a char
    s1 = s1 + 'x';
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");

    *s4 = *s4 + 'x';
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
        printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");


    // + between 2 MyString
    s1 = s1 + *s3;
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");

    *s3 = s1 + *s4;
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
        printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");


    // MAX_SIZE
    *s3 = *s3 + *s2;
    printf("s3 size: %d\ns3 content: ",s3->size());
    for(i = 0; i < s3->length(); i++)
    {
        printf("%c", (s3->c_str())[i]);
    }
    printf("\n\n");


    // + between a MyString and a char*
    s1.clear();
    s1 = 'x';
    s1 = s1 + "Pomegranates";
    printf("s1 size: %d\ns1 content: ",s1.size());
    for(i = 0; i < s1.length(); i++)
    {
        printf("%c", (s1.c_str())[i]);
    }
    printf("\n\n");


    *s4 = *s4 + "Grenade";
    printf("s4 size: %d\ns4 content: ",s4->size());
    for(i = 0; i < s4->length(); i++)
    {
        printf("%c", (s4->c_str())[i]);
    }
    printf("\n\n");


    // test with a const MyString
    const MyString s5 = *s4;
    printf("s5 size: %d\ns5 content: ",s5.size());
    for(i = 0; i < s5.length(); i++)
    {
        printf("%c", (s5.c_str())[i]);
    }
    printf("\n\n");
    printf("s5 length: %d !\nmax s5 size: %f\n", s5.length(), s5.max_size());
    printf("s5 size: %d\ns5 content: ",s5.size());
    for(i = 0; i < s5.size(); i++)
    {
        printf("%c", s5.at(i));
    }
    printf("\n\n"); 
    //s5 = "Pomegranates";


    //old test
	/*char* c_s1 = "Popopo";
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

	*/
    /*MyString* s4 = new MyString(c_s1);
    char charx = 'x';
    *s4 = (*s1) + charx;*/
	/*MyString* s4 = new MyString((*s1) + 'x');       // testing operator + (char)
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
    printf("\n");*/

    delete s2;
    delete s3;
    delete s4;

 	return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================


//****************************************************************************
//
//                                    MyString
//
//****************************************************************************



#ifndef __MyString_H__
#define __MyString_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>



// ===========================================================================
//                                Project Files
// ===========================================================================




// ===========================================================================
//                              Class declarations
// ===========================================================================






class MyString
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    MyString(void);
    MyString(const char* c);

    MyString(const MyString&);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    ~MyString(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
    inline const int length();
    inline const float max_size();
    inline int size(void);
    
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================

    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================
    void resize(size_t n);
    void resize(size_t n, char c);

    char* c_str(void);

    void clear(void);

    MyString& operator= (const MyString&);

    MyString operator+ (char);
    


    // =======================================================================
    //                             Public Attributes
    // =======================================================================





  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*MyString
MyString(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
    /*MyString(const MyString &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/


    // =======================================================================
    //                              Protected Methods
    // =======================================================================

    // =======================================================================
    //                             Protected Attributes
    // =======================================================================
    static const float MAX_SIZE = 100;
    int chars_length;
    int mem_length;
    char* chars;

};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================
int const MyString::length()
{
    return chars_length;
}


float const MyString::max_size()
{
    return MAX_SIZE;
}

int MyString::size (void)
{
   return chars_length;
}


// ===========================================================================
//                              Setters' definitions
// ===========================================================================

// ===========================================================================
//                             Operators' definitions
// ===========================================================================


/*

// if we want to append a char to an existing string
// e.g. aString + 'a'
MyString MyString::operator+ (const MyString& left, char right)
{
    // length of the resulting string
    int nbchars = mem_length +1;

    // we reserve the memory for the resulting string
    char* newstring = new char [nbchars];

    // then the new data is added
    memcpy (newstring, left.chars, nbchars*sizeof(*chars));
    newstring[nbchars-1] = right;

    // finally the resulting string is created and returned
    MyString* output = new MyString(newstring);
    return *output;
}



// if we want to append an existing string to a char (the other way around)
//e.g. 'a' + aString
MyString MyString::operator+ (char left, const MyString& right)
{
    // length of the resulting string
    int nbchars = mem_length +1;

    // we reserve the memory for the resulting string
    char* newstring = new char [nbchars];

    // then the new data is added
    newstring[0] = left;
    memcpy (newstring[1], right.chars, nbchars*sizeof(*chars));

    // finally the resulting string is created and returned
    MyString* output = new MyString(newstring);
    return *output;
}


*/

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __MyString_H__


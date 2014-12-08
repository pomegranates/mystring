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

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~MyString(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
    inline const int length();
    inline const float max_size();

    
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
    MyString(const MyString &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };


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
// ===========================================================================
//                              Setters' definitions
// ===========================================================================

// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __MyString_H__


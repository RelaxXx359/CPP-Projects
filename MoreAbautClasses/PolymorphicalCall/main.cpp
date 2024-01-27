// Attempting to polymorphically call a function that is
// multiply inherited from two base classes.
#include <iostream>
using std::cout;
using std::endl;

// class Base definition
class Base 
{
public:   
   virtual void print() const = 0; // pure virtual
}; // end class Base

// class DerivedOne definition
class DerivedOne : public Base 
{
public:
   // override print function                    
   void print() const 
   {
      cout << "DerivedOne\n";
   } // end function print
}; // end class DerivedOne

// class DerivedTwo definition
class DerivedTwo : public Base 
{
public:
   // override print function
   void print() const        
   {                         
      cout << "DerivedTwo\n";
   } // end function print   
}; // end class DerivedTwo

// class Multiple definition
class Multiple : public DerivedOne, public DerivedTwo 
{
public:
   // qualify which version of function print
   void print() const                        
   {                                         
      DerivedTwo::print();                   
   } // end function print                   
}; // end class Multiple

int main()
{
   Multiple both; // instantiate Multiple object
   DerivedOne one; // instantiate DerivedOne object
   DerivedTwo two; // instantiate DerivedTwo object
   Base *array[ 3 ]; // create array of base-class pointers

   array[ 0 ] = &one;
   array[ 1 ] = &two;
   array[ 2 ] = &both; // ERROR--ambiguous

   // polymorphically invoke print
   for ( int i = 0; i < 3; i++ )
      array[ i ] -> print();

   return 0;
} // end main

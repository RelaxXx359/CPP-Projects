// Using virtual base classes.
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
class DerivedOne : virtual public Base 
{
public:
   // override print function                    
   void print() const 
   {
      cout << "DerivedOne\n";
   } // end function print
}; // end DerivedOne class

// class DerivedTwo definition
class DerivedTwo : virtual public Base 
{
public:
   // override print function                    
   void print() const 
   {
      cout << "DerivedTwo\n";
   } // end function print
}; // end DerivedTwo class

// class Multiple definition
class Multiple : public DerivedOne, public DerivedTwo 
{
public:
   // qualify which version of function print
   void print() const                        
   {                                         
      DerivedTwo::print();                   
   } // end function print                   
}; // end Multiple class

int main()
{
   Multiple both; // instantiate Multiple object
   DerivedOne one; // instantiate DerivedOne object
   DerivedTwo two; // instantiate DerivedTwo object

   // declare array of base-class pointers and initialize
   // each element to a derived-class type
   Base *array[ 3 ];
   array[ 0 ] = &both;
   array[ 1 ] = &one;
   array[ 2 ] = &two;

   // polymorphically invoke function print
   for ( int i = 0; i < 3; i++ )
      array[ i ]->print();

   return 0;
} // end main

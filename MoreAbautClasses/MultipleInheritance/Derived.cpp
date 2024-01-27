// Member function definitions for class Derived
#include "derived.h"

// constructor for Derived calls constructors for
// class Base1 and class Base2.
// use member initializers to call base-class constructors
Derived::Derived( int integer, char character, double double1 )
   : Base1( integer ), Base2( character ), real( double1 ) { }

// return real
double Derived::getReal() const
{
   return real;
} // end function getReal

// display all data members of Derived
ostream &operator<<( ostream &output, const Derived &derived )
{
   output << "    Integer: " << derived.value << "\n  Character: "
      << derived.letter << "\nReal number: " << derived.real;
   return output; // enables cascaded calls
} // end operator<<

// Definition of class Derived which inherits
// multiple base classes (Base1 and Base2).
#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
using std::ostream;

#include "Base1.h"
#include "Base2.h"

// class Derived definition
class Derived : public Base1, public Base2 
{
   friend ostream &operator<<( ostream &, const Derived & );
public:
   Derived( int, char, double );
   double getReal() const;
private:
   double real; // derived class's private data
}; // end class Derived

#endif // DERIVED_H

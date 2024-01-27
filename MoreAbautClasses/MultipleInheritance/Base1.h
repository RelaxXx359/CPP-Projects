// Definition of class Base1
#ifndef BASE1_H
#define BASE1_H

// class Base1 definition
class Base1 
{
public:
   Base1( int parameterValue ) 
   {
      value = parameterValue;
   } // end Base1 constructor

   int getData() const 
   {
      return value;
   } // end function getData
protected: // accessible to derived classes
   int value; // inherited by derived class
}; // end class Base1

#endif // BASE1_H

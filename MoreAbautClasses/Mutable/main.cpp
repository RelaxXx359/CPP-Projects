// Demonstrating storage-class specifier mutable.
#include <iostream>
using std::cout;
using std::endl;

// class TestMutable definition
class TestMutable 
{
public:
   TestMutable( int v = 0 ) 
   {
      value = v;
   } // end TestMutable constructor

   int getValue() const 
   {
      return value++; // increments value
   } // end function getValue
private:
   mutable int value; // mutable member
}; // end class TestMutable

int main()
{
   const TestMutable test( 99 );

   cout << "Initial value: " << test.getValue();
   cout << "\nModified value: " << test.getValue() << endl;
   return 0;
} // end main

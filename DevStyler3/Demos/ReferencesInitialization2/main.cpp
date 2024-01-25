// References must be initialized.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int x = 3;
   int &y; // Error: y must be initialized

   cout << "x = " << x << endl << "y = " << y << endl;
   y = 7;
   cout << "x = " << x << endl << "y = " << y << endl;
   return 0; // indicates successful termination
} // end main
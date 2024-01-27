// Creating a randomly accessed file.
#include <iostream>
using std::cerr;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit; // exit function prototype

#include "ClientData.h" // ClientData class definition

int main()
{
   ofstream outCredit( "credit.dat", ios::binary );

   // exit program if ofstream could not open file
   if ( !outCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   ClientData blankClient; // constructor zeros out each data member

   // output 100 blank records to file
   for ( int i = 0; i < 100; i++ )
      outCredit.write( reinterpret_cast< const char * >( &blankClient ),
         sizeof( ClientData ) );

   return 0;
} // end main


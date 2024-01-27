// Fig. 17.4: main.cpp
// Create a sequential file.
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream> // file stream
using std::ofstream; // output file stream

#include <cstdlib> 
using std::exit; // exit function prototype

int main()
{
   // ofstream constructor opens file                
   ofstream outClientFile( "clients.dat", ios::out );

   // exit program if unable to create file
   if ( !outClientFile ) // overloaded ! operator
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   } // end if

   cout << "Enter the account, name, and balance." << endl
      << "Enter end-of-file to end input.\n? ";

   int account;
   char name[ 30 ];
   double balance;

// read account, name and balance from cin, then place in file
   while ( cin >> account >> name >> balance )
   {
      outClientFile << account << ' ' << name << ' ' << balance << endl;
      cout << "? ";
   } // end while

   return 0; // ofstream destructor closes file
} // end main


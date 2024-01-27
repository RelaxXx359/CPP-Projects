// Reading a random access file sequentially.
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <fstream>
using std::ifstream;
using std::ostream;

#include <cstdlib> 
using std::exit; // exit function prototype

#include "ClientData.h" // ClientData class definition
 
void outputLine( ostream&, const ClientData & ); // prototype

int main()
{
   ifstream inCredit( "credit.dat", ios::in );

   // exit program if ifstream cannot open file
   if ( !inCredit ) 
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   cout << left << setw( 10 ) << "Account" << setw( 16 )
      << "Last Name" << setw( 11 ) << "First Name" << left
      << setw( 10 ) << right << "Balance" << endl;

   ClientData client; // create record

   // read first record from file
   inCredit.read( reinterpret_cast< char * >( &client ), 
      sizeof( ClientData ) );

   // read all records from file
   while ( inCredit && !inCredit.eof() ) 
   {
      // display record
      if ( client.getAccountNumber() != 0 )
         outputLine( cout, client );

      // read next from file
      inCredit.read( reinterpret_cast< char * >( &client ),
         sizeof( ClientData ) );
   } // end while

   return 0;
} // end main

// display single record
void outputLine( ostream &output, const ClientData &record )
{
   output << left << setw( 10 ) << record.getAccountNumber()
      << setw( 16 ) << record.getLastName()
      << setw( 11 ) << record.getFirstName()
      << setw( 10 ) << setprecision( 2 ) << right << fixed 
      << showpoint << record.getBalance() << endl;
} // end function outputLine


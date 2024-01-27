// Writing to a random-access file.
#include <iostream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;

#include <fstream>
using std::fstream;

#include <cstdlib>
using std::exit; // exit function prototype

#include "ClientData.h" // ClientData class definition

int main()
{
   int accountNumber;
   char lastName[ 15 ];
   char firstName[ 10 ];
   double balance;

   fstream outCredit( "credit.dat", ios::in | ios::out | ios::binary );

   // exit program if fstream cannot open file
   if ( !outCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   cout << "Enter account number (1 to 100, 0 to end input)\n? ";

   // require user to specify account number
   ClientData client;
   cin >> accountNumber;

   // user enters information, which is copied into file
   while ( accountNumber > 0 && accountNumber <= 100 )
   {
      // user enters last name, first name and balance
      cout << "Enter lastname, firstname, balance\n? ";
      cin >> setw( 15 ) >> lastName;
      cin >> setw( 10 ) >> firstName;
      cin >> balance;

      // set record accountNumber, lastName, firstName and balance values
      client.setAccountNumber( accountNumber );
      client.setLastName( lastName );
      client.setFirstName( firstName );
      client.setBalance( balance );

      // seek position in file of user-specified record
      outCredit.seekp( ( client.getAccountNumber() - 1 ) *
         sizeof( ClientData ) );

      // write user-specified information in file
      outCredit.write( reinterpret_cast< const char * >( &client ),
         sizeof( ClientData ) );

      // enable user to enter another account
      cout << "Enter account number\n? ";
      cin >> accountNumber;
   } // end while

   return 0;
} // end main



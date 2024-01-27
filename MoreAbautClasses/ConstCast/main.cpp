// Demonstrating const_cast.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // contains prototypes for functions strcmp and strlen
#include <cctype> // contains prototype for function toupper

// returns the larger of two C-style strings
const char *maximum( const char *first, const char *second )
{
   return ( strcmp( first, second ) >= 0 ? first : second );
} // end function maximum

int main()
{
   char s1[] = "hello"; // modifiable array of characters
   char s2[] = "goodbye"; // modifiable array of characters

   // const_cast required to allow the const char * returned by maximum
   // to be assigned to the char * variable maxPtr
   char *maxPtr = const_cast< char * >(  ( s1, s2 ) );

   cout << "The larger string is: " << maxPtr << endl;

   for ( size_t i = 0; i < strlen( maxPtr ); i++ )
      maxPtr[ i ] = toupper( maxPtr[ i ] );

   cout << "The larger string capitalized is: " << maxPtr << endl;
   return 0;
} // end main

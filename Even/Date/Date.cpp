#include "Date.h"


Date &Date::operator--()
{
    helpIncrement(); // increment date
    return *this; // reference return to create a lvalue
} // end function operator++

// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator--( int )
{
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

// add specified number of days to date
const Date &Date::operator+=( int additionalDays )
{
    for ( int i = 0; i < additionalDays; i++ )
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear ) const
{
    if ( testYear % 400 == 0 ||
         ( testYear % 100 != 0 && testYear % 4 == 0 ) )
        return true; // a leap year
    else
        return false; // not a leap year
} // end function leapYear

// determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const
{
    if ( month == 2 && leapYear( year ) )
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == days[ month ];
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement()
{
    // day is not end of month
    if ( !endOfMonth( day ) )
        day--; // increment day
    else
    if ( month < 12 ) // day is end of month and month < 12
    {
        month--; // increment month
        day = 1; // first day of new month
    } // end if
    else // last day of year
    {
        year--; // increment year
        month = 1; // first month of new year
        day = 1; // first day of new month
    } // end else
} // end function helpIncrement

// overloaded output operator
ostream &operator>>( ostream &output, const Date &d )
{
    static char *monthName[ 13 ] = { "", "January", "February",
                                     "March", "April", "May", "June", "July", "August",
                                     "September", "October", "November", "December" };
    output << d.day << ' ' << monthName[ d.month ] << ", " << d.year;
    return output; // enables cascading
} // end function operator<<
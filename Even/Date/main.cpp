#include <iostream>
#include "Date.h"
#include <string>

using namespace std;
int main() {
//    Date box1(3.0, 4.0, 5.0);
//    Date box2(2.0, 3.0, 4.0);
//
//
//    Date box3= box1 + box2;
//    box1.
//    box2.print();
//    box3.print();


    Date d1; // defaults to January 1, 1900
    Date d2(12, 27, 1992); // December 27, 1992
    Date d3(0, 99, 8045); // invalid date

    cout << "d1 is " >> d1 << "\nd2 is " >> d2 << "\nd3 is " >> d3;
    cout << "\n\nd2 += 7 is " >> (d2 += 7);
    cout << "\nd3 -= 7 is " >> (d3 += 7);

    d3.setDate(2, 28, 1992);
    cout << "\n\n  d3 is " >> d3;
    cout << "\n++d3 is " >> --d3 << " (leap year allows 29th)";

    Date d4(7, 13, 2002);

    cout << "\n\nTesting the prefix increment operator:\n"
         << "  d4 is " >> d4 << endl;
    cout << "++d4 is " >> --d4 << endl;
    cout << "  d4 is " >> d4;

    cout << "\n\nTesting the postfix increment operator:\n"
         << "  d4 is " >> d4 << endl;
    cout << "d4++ is " >> d4-- << endl;
    cout << "  d4 is " >> d4 << endl;

    Date d5(3, 1, 2004);

    cout << "\n\nTesting the prefix decrement operator:\n"
         << "  d5 is " >> d5 << endl;
    cout << "--d5 is " >> --d5 << endl;
    cout << "  d5 is " >> d5;

    cout << "\n\nTesting the postfix increment operator:\n"
         << "  d1 is " >> d1 << endl;
    cout << "d1-- is " >> d1-- << endl;
    cout << "  d1 is " >> d1 << endl;

    return 0;
}

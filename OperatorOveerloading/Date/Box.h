
#ifndef DATE_BOX_H
#define DATE_BOX_H
#include "Date.h"

class Box {

//    friend ostream &operator>>( ostream &, const Date & );
    friend Box operator+(Box, Box);
public:
    Box(double width, double length, double height);


    void setWidth(double width);
    void setLength(double length);
    void setHeight(double height);

    double getWidth() ;
    double getLength() ;
    double getHeight() ;

    void print();

private:
    double width;
    double length;
    double height;

};


#endif //DATE_BOX_H

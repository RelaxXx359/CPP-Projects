#include <iostream>
#include <math.h>

using namespace std;

double calculate(double hours) {
    double tax = 2;
    double result;

    if (hours <= 3){
        return tax;
    }
    if (hours > 3) {
        double overHours = ceil(hours - 3);  // cell закръгляне към по голямо #include <marh.h>
        cout << "Over time " << overHours << endl;
        double overTax = overHours * 0.5;  // 3.5
        result = tax + overHours;
    }
    if (result > 10) {
        tax == 10;
    }

    return result;
}


int main() {
    double hour;
    cin >> hour;
    calculate(hour);

    return 0;
}
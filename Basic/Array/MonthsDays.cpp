#include <iostream>
using namespace std;

int main() {
    int months;
    cin >> months;

    int day;
    cin >> day;

    int numbers[months][day];

    string month[12] = {"January", "February", "March", "April", "May", "Jun", "Juli", "August", "September",
                        "October", "November", "December"};

    for (int i = 0; i < months; ++i) {
        for (int j = 0; j < day; ++j) {
            cout << "enter elements" << endl;
            cin >> numbers[i][j];
        }
    }
    for (int i = 0; i < months; ++i) {
        for (int j = 0; j < day; ++j) {
            if (numbers[i][j] == 20) {
                cout << "Months is " << month[i] << endl;
                cout << "Day is" <<  " " <<j + 1 << endl;

            }
        }
    }

    return 0;
}
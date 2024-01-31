#include <iostream>

using namespace std;

int main() {

//  Изписване на многоцифрено число на обратно.

    int number;
    cout << "Enter a number: ";
    cin >> number;


    while (number > 0) {
        cout << number % 10;
        number = number / 10;
    }



}
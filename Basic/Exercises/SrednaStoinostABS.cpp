#include <iostream>

using namespace std;

int main() {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    double sum1 = 0;

    for (int i = 0; i <7; ++i) {           //  Програмата да изведе числото, което е най-близко до средната стойност на въведените числа
        sum1 = (abs(sum1) + abs(arr[i]));
    }
    double totalSum = sum1 / 7;
    cout << "Average value: " << totalSum << endl;
    cout << "Hearest value: " << totalSum << endl;

    return 0;
}
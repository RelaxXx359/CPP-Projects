#include <iostream>

using namespace std;

int main() {

    int arr[7] = {-2, 15, 18, -7, 6, 7, 8};
    double sum2 = 0;

int max = INT_MIN;

    for (int i = 0; i <7; ++i) {             //  Програмата да изведе числото, което е с максимална разлика от средната стойност на въведените числа.
        sum2 = sum2 + arr[i];
    }

    double averageValue = sum2 / 7;
    cout << "Average value " << averageValue << endl;

    for (int i = 0; i < 7; ++i) {
        int max = INT_MIN;
        if (averageValue > max) {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < 7; ++i) {
        if (min > arr[i]) {
            min = arr[i];
        }

    }
    cout << "Number " << min << endl;
    return 0;
}
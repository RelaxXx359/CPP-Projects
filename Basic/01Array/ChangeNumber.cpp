#include <iostream>

using namespace std;

int main() {

    // Въвеждаме 7 дефинирани числа, трябва да ги отпечатаме в обратен ред


//    int arr[7] = {1, 2, 4, 3, 5, 6, 7};
//
//    for (int j = 7-1; j >= 0; --j) {
//        cout << arr[j];
//    }


    // Въвеждаме елементи в конзолата , трябва да ги отпечатаме в обратен ред

    int n;
    cin >> n;

    int arr[n];

    for (int i = n - 1; i >= 0; --i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;

    }


return 0;
}
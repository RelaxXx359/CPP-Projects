#include <iostream>
#include <string>

using namespace std;

//bez parametri
//void printSignOfNumber() {
//    int number;
//    cout << "enter number" << endl;
//    cin >> number;
//
//    if (number > 0) {
//        cout << "+";
//    } else {
//        cout << "-";
//    }
//}
//
//
//int main() {
//
//    printSignOfNumber();
//
//    return 0;
//}

int printSignOfNumber() {
    int number;
    cout << "enter number" << endl;
    cin >> number;

    if (number > 0) {
        cout << "+" << endl;
    } else {
        cout << "-" << endl;
    }
    return number;
}

int sumTwoNumbers() {
    int a, b;
    cout << "enter a";
    cin >> a;
    cout << "enter b";
    cin >> b;

    int sum;
    sum = a + b;
    return sum;
}

int sum(int a, int b) {
    return a + b;
}

int sum2(int a) {
    a = a + 1;
    return a;

}

int main() {

//sum 2
    int number = 67;

    cout << sum2(number) << endl;

    cout << number;

    //sum  дефиниране от конзолата
//    int a;
//    cin >> a;
//    int b;
//    cin >> b;
//    int res = sum(a, b);
//    cout << res;

// sum статично дефиниране
//    int res = sum(22, 44);
//    cout << res;

//    int sum = sumTwoNumbers();
//    cout << sum;


//    int x, y, z, k;
//
//    x = printSignOfNumber();
//
//    y = printSignOfNumber();
//
//    z = printSignOfNumber();
//
//    k = printSignOfNumber();
//
//    cout << x << y << z << k;

    return 0;
}
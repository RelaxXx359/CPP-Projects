#include <iostream>

using namespace std;

int Max(int num1, int num2) {
    int result = num2;

    if (num1 > num2) {
        result = num1;
    }

    return result;
}

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    int res = Max(a,b);
    cout << res;


    return 0;
}
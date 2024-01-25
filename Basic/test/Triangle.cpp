#include <iostream>

using namespace std;

int main() {

    int n = 4;








    for (int i = 0; i < n; ++i) {
        // Отпечатване на празни пространства за да се създаде десен прав ъгъл
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int k = i; k < n; ++k) {
            cout << "*";  // Можеш да промениш * с друг символ, ако желаеш
        }
        cout << endl;
    }
    for (int i = 0; i <= n ; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}

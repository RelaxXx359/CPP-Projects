#include <iostream>

using namespace std;

int main() {


    int array[5][10];
    // Създава се масив


    for (int i = 0; i < 5; ++i) {   // Нормален табличен вид – 5 реда, 10 колони:
        for (int j = 0; j < 10; ++j) {
            cout << "" << j << "" << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 10; ++i) { // Отпечатайте същата таблицата така, че редовете да станат колони, а колоните редове.
        for (int j = 0; j < 5; ++j) {
            cout << "" << j << "" << i << " ";
        }
        cout << endl;
    }

    return 0;
}
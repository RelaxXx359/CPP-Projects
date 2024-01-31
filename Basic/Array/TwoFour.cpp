#include <iostream>

using namespace std;

int main() {

    // Дефинирани са елементи, трябва да се принтират в същия ред

//    int arr[2][4] = {{11, 12, 45, 55},
//                     {23, 45, 56, 77}
//    };
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }


    // Въвеждат се стойност на ред,колона и се пълят с елементи
    // трябва да се принтират в същия ред горе

    int row;
    cin >> row;
    int cols;
    cin >> cols;

    int arr2[row][cols];

    for (int i = 0; i < row; ++i) {               //Цикъл за въвеждане на стойностите
        for (int j = 0; j < cols; ++j) {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        cout << endl;
        for (int j = 0; j < cols; ++j) {
            cout << arr2[i][j] << " ";
        }
    }

    return 0;
}
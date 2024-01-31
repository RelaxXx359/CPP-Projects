#include <iostream>

using namespace std;

int main(){

    // Изваждане на числата ПОД -  Главната матрица

    int row;
    cin >> row;
    int col;
    cin >> col;

    int matrix[4][4];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (i > j){
                cout << matrix[i][j] << endl;
            }
        }
    }

    //входни данни: 4
                //  4
    // и числата от 1 до 16 например
    // резултат: 5,9,10,13,14,15

    return 0;
}
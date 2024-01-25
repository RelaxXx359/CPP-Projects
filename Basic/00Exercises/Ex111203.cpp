#include <iostream>

using namespace std;

int main() {

    // Изваждане на числата НАД -  Главната матрица

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
            if (j > i){
                cout << matrix[i][j]<< endl;
            }
        }
    }
    //входни данни: 4
                //  4
                 // и числата от 1 до 16 например
                 // резултат: 2,3,4,7,8,12
    return 0;
}

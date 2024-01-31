#include <iostream>

using namespace std;

int main() {

    // Изваждане на числата от главния диагонал на матрица 4x4.

    int row;
    cout << "Enter elements:";
    cin >> row;
    int col;
    cout << "Enter elements:";
    cin >> col;

    int matrix[4][4];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }
   int sum = 0;                               // и този вариант става но за 3x3 4x4, за 100x100 цикила ще прави много итераций за обхождане на матрицата
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            if (i == j) {
//                sum + matrix[i][j];
//                cout << matrix[i][j] << endl;
//            }
//        }
    for (int row = 0; row < col; ++row) {      //това е по оптималния вариянт за обхождане на Главния диагонал
        cout << matrix[row][row] << endl;
    }


    return 0;
}



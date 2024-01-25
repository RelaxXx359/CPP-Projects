#include <iostream>

using namespace std;

int main() {


    int rows;
    cin >> rows;

    int cols;
    cin >> cols;

    int number[rows][cols];
    long product = 1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "enter elements";
            cin >> number[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (number[i][j] % 5 == 0) {
                product = product * number[i][j];
            }
        }
        cout << "Product is " << product << endl;
    }

    return 0;
}
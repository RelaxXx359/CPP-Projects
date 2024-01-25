#include <iostream>

using namespace std;

int main(){
    int rows;
    cout << "Enter array row";
    cin >> rows;

    int cols;
    cout << "Enter array col";
    cin >> cols;

    int number[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> number[i][j];
        }
    }




    return 0;
}
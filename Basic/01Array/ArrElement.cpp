#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arrMatrix[n][n];

    int min = INT_MAX;
    int max = INT_MIN;

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            cin >> arrMatrix[row][col];
        }
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (row > col) {
//                if (arrMatrix[row][col] < min) {
//                    min = arrMatrix[row][col];
//
//                }
if (arrMatrix[row][col] > max){
    max = arrMatrix[row][col];
}


            }

        }
    }
//    cout << min << endl;
    cout << max << endl;


    return 0;
}

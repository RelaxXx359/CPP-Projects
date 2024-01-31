#include <iostream>

using namespace std;

int main() {
    int r;
    int c;
    cin >> r;
    cin >> c;

    int a[r][c];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

//    for (int i = 0; i < r; ++i) {
//        int sum = 0;
//        for (int j = 0; j < c; ++j) {
//            sum += a[i][j];
//        }
//        cout << "Suma za kolona " << i + 1 << " e " << sum << endl;
//
//
//    }

    for (int i = 0; i < c; ++i) {
        int sum = 0;
        for (int j = 0; j < r; ++j){
            sum += a[i][j];
        }
        cout << "Suma za red " << i + 1 << " e " << sum << endl;

    }


    return 0;
}
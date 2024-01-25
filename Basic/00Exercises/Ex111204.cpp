#include <iostream>

using namespace std;

int main() {

    // Изваждане на числата на горния и долния диагонал и намиране на най-малко и най голямо число

    int arr[4][4] = {1, 3, 55, 44,
                     2, 45, 67, 89,
                     23, 87, 2233, 6,
                     1000, 23456, 67, 8};

    int max = INT_MIN;   // INT_MIN, INT_MAX     могат да се заместят с     int min = arr[0][0];
    int min = INT_MAX;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i > j) {
                if (arr[i][j] > max) {
                    max = arr[i][j];
                }
            }
            if (i > j) {
                if (arr[i][j] < min) {
                    min = arr[i][j];
                }
            }
        }
    }
    cout << "Max num lower diagonal: " << max << endl;
    cout << "Min num lower diagonal: " << min << endl;

    cout << endl;
    int max2 = INT_MIN;
    int min2 = INT_MAX;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j > i) {
                if (arr[i][j] > max2) {
                    max2 = arr[i][j];
                }
            }
            if (j > i) {
                if (arr[i][j] < min2) {
                    min2 = arr[i][j];
                }
            }
        }
    }
    cout << "Max num upper diagonal: " << max2 << endl;
    cout << "Min num upper diagonal: " << min2 << endl;



    return 0;
}


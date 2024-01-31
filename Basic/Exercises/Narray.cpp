#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[5] = {-23, 23, 55, 12, 10};
    int maxEl, minEl;

    maxEl = arr[0];
    minEl = arr[0];

    for (int i = 0; i < n; ++i) {
        if (maxEl < arr[i]) {
            maxEl = arr[i];
        }
        if (minEl > arr[i]){
            minEl = arr[i];
        }

    }
    cout << "max: " << maxEl << endl << "min: " << minEl << endl;

    return 0;
}
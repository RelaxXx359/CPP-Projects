#include <iostream>

using namespace std;

int main() {

    int n = 5;
    int mid = n / 2;

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y) {
            if (abs(x - mid) + abs(y - mid) <= mid){
                cout << "*";
            }else {
                cout << " ";
            }
        }
        cout << endl;

    }


    return 0;
}
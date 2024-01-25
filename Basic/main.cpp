#include <iostream>

using namespace std;

int main() {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 7 - 1; i >= 0; --i) {
        cout<< arr[i] << " ";
    }


    return 0;
}

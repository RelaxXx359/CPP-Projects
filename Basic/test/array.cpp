#include <iostream>

using namespace std;

int main() {
    int temp[5] = {10, 20, 15, 13, 18,};

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum = sum + temp[i];

    }
    cout << "Sum " << sum << endl;
    cout << "Average " << sum / 5<< endl;


//    for (int i = 0; i < 5; ++i) {
//        cout << temp[i]<< endl;
//    }

    return 0;
}
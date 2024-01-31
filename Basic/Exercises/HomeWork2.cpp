#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    for (int i = 100; i <= 999; ++i) {
        int one = i % 10;
        int two = (i / 10) % 10;
        int tree = (i / 100) % 10;
        sum = one + two + tree;
        cout << sum << " ";
    }


    return 0;
}

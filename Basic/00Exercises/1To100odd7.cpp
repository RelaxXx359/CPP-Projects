#include <iostream>

using namespace std;

int main(){

    // Трябва да се принтират числата от 1 до 100 само нечетните на 7.

    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
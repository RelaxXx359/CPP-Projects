#include <iostream>

using namespace std;

int main() {
    //Имате двумерен масив 6х5 от естествени числа от интервала [0..100], чийто стойности са въведени предварително.
    //Да се състави програма на C++, чрез която се извеждат елементите от масива с най-малката и най-голямата стойност.
    //Пример:
    //48,72,13,14,15
    //21,22,53,24,75
    //31,57,33,34,35
    //41,95,43,44,45
    //59,52,53,54,55
    //61,69,63,64,65
    //Изход: най-малко 13; най-голямо 95

    int arrMatrix[6][5] = {48, 72, 13, 14, 15,
                           21, 22, 53, 24, 75,
                           31, 57, 33, 34, 35,
                           41, 95, 43, 44, 45,
                           59, 52, 53, 54, 55,
                           61, 69, 63, 64, 65};

    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for (int row = 0; row < 6; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (arrMatrix[row][col] > maxNum) {
                maxNum = arrMatrix[row][col];
            }
            if (arrMatrix[row][col] < minNum) {
                minNum = arrMatrix[row][col];
            }
        }
    }
    cout << "Max num: " << maxNum << endl;
    cout << "Min num: " << minNum << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int arr[]{3, 5, 2, 4, 6, 9, 7, 8, 1, 6, 9, 7, 1, 8, 5, 9, 3, 2, 8, 9, 1, 2, 7, 3, 6, 5, 4, 1,
              3, 9, 6, 4, 2, 5, 7, 8, 4, 6, 5, 8, 4, 7, 2, 1, 3, 2, 7, 8, 5, 3, 1, 4, 9, 6, 9, 2, 4, 5, 1, 8,
              3, 6, 7, 5, 1, 3, 9, 2, 6, 8, 4, 7, 7, 8, 6, 3, 5, 4, 1, 2, 9};
    // създаваме масив с елементите

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int counter = 0;

    if (arr_size != 81) {
        std::cout << "Incorrect number of numbers! It should be exactly 81." << std::endl;
        return 0;
    }

    for (int i = 0; i < 81; ++i) {
        cout << arr[i];
        counter++;
        //if ()

    }
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if ((9 * 9) == 81) {   // умножаваме реда по колоната и проверяваме дали е равно на 81
                cout << arr[i] << " "; // принтираме елементите в масива
            }
            if (counter == 3 || counter == 6) {
                cout << " ";
            }
        }
        cout << endl;  // минаваме на следващия ред след итерацията на реда
    }
    return 0;
}
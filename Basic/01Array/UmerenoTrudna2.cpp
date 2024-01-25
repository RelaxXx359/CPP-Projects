#include <iostream>

int main() {

    // Creating array
    int arr[] { 3,5,2,4,6,9,7,8,1,6,9,7,1,8,5,9,3,2,8,9,1,2,7,3,6,5,4,1,
                3,9,6,4,2,5,7,8,4,6,5,8,4,7,2,1,3,2,7,8,5,3,1,4,9,6,9,2,4,5,1,8,
                3,6,7,5,1,3,9,2,6,8,4,7,7,8,6,3,5,4,1,2,9 };

    // find size of array
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    if (arr_size != 81) {
        std::cout << "Incorrect number of numbers! It should be exactly 81." << std::endl;
        return 0;
    }

    // Printing array in 9x9
    int separator = 0;
    int row = 0;

    for (int i = 0; i < 81; ++i) {
        std::cout << arr[i] << " ";
        separator++;

        if (separator == 9) {
            std::cout << std::endl;
            row++;
            separator = 0;
        }

        if (separator == 3 || separator == 6) {
            std::cout << "|";
        }

        if (row == 3) {
            std::cout << "-------------------";
            std::cout << std::endl;
            row = 0;
        }
    }

    std::cout << std::endl;

    return 0;
}
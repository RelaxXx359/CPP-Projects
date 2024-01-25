#include <iostream>
#include <vector>

using namespace std;

void printPattern(int n) {
    vector<vector<int>> pattern(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= 16) { // Change the loop condition to go up to 16
        for (int i = left; i <= right; ++i) pattern[top][i] = num++;
        for (int i = top + 1; i <= bottom; ++i) pattern[i][right] = num++;
        for (int i = right - 1; i >= left; --i) pattern[bottom][i] = num++;
        for (int i = bottom - 1; i >= top + 1; --i) pattern[i][left] = num++;

        top++;
        right--;
        bottom--;
        left++;
    }

    for (const auto& row : pattern) {
        for (int num : row) {
            if (num != 0 && num <= 16) {
                cout << num << " ";
            } else {
                cout << "  "; // Add spaces in place of zeroes
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value to adjust the size
    printPattern(n);
    return 0;
}
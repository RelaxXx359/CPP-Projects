#include <iostream>

using namespace std;

int main() {

    //Една квадратна таблица от числа се нарича магически квадрат, когато е изпълнено следното условие:
    // всички суми, получени поотделно от сбора на елементите по всеки ред/всеки стълб/всеки от двата диагонала са равни.
    //Да се състави програма на C++, която въвежда естествени числа от интервала [1..20] в дадена квадратна таблица и
    // определя дали те образуват магически квадрат.
    //Пример:
    //16,3,2,13
    //5,10,11,8
    //9,6,7,12
    //4,15,14,1
    //Изход: магически квадрат, сума по редове и колони 34


    int size;
    cout << "Enter a natural number: \n";
    cin >> size;
    int numMatrix[20][20];  // масив от [1..20];

    int rowSum = 0;
    int colSum = 0;

    int firsDiagonal = 0;
    int secondDiagonal = 0;

    bool isCorrect = false;

    // създаване и попълване на куба
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Enter number between 0 and 20 \n";
            cin >> numMatrix[i][j];
        }
    }

    // обхождане и пресмятане на колони, редове и диагонали
    for (int i = 0; i < size; ++i) {
        rowSum = 0;
        colSum = 0;
        // обхождане на всеки ред и вска колона
        for (int j = 0; j < size; ++j) {
            rowSum += numMatrix[j][i];
            colSum += numMatrix[i][j];
            if (i == j) {
                firsDiagonal += numMatrix[i][j];
            }
            if ((i + j) == (size - 1)) {
                secondDiagonal += numMatrix[i][j];
            }
        }
        if (colSum == rowSum) {
            isCorrect = true;
        } else {
            break;
        }
    }
    if (isCorrect) {
        cout << "The cube is correct, sum is " << colSum << endl;

    }
    return 0;
}
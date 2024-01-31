#include <iostream>

using namespace std;

int main() {

    int arr[] = {3, 5, 2, 4, 6, 9, 7, 8, 1, 6, 9, 7, 1, 8, 5, 9, 3, 2, 8, 9, 1, 2, 7, 3, 6, 5, 4, 1, 3, 9, 6, 4, 2, 5,
                 7, 8, 4, 6, 5, 8, 4, 7, 2, 1, 3, 2, 7, 8, 5, 3, 1, 4, 9, 6, 9, 2, 4, 5, 1, 8, 3, 6, 7, 5, 1, 3, 9, 2,
                 6, 8, 4, 7, 7, 8, 6, 3, 5, 4, 1, 2, 9};

    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    //Този ред е за изчисляване на дължината на масива arr и съхраняването му в n.
    // sizeof(arr) е размерът на целия масив (размер според това колко място заема в паметта),
    // а sizeof(arr[0]) е размерът на един елемент.

    if (sizeArr != 81) {
        cout << "The digits in the array must be exactly 81. Exiting the program." << endl;
        return 0;
        //Ако размера не е 81,
    }
    cout << "The size of the array is: " << sizeArr << endl;
    cout << endl;
    // Ако размера на масива е 81.

    int sudokuTable[9][9];
    for (int i = 0; i < sizeArr; ++i) {
        sudokuTable[i / 9][i % 9] = arr[i];
        /* индекса на всеки елемент от array се дели на 9 без остатък и по мод 9.
        Двата резултата се присъждат като индекси на елемента от двумерния масив sudokuTable.
        array[i] се задава като стойност на текущия sudokuTable[][] елемент. */
    }
    int sudokoCell[3][3][9];
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            sudokoCell[i / 3][j / 3][((i % 3) * 3) + j % 3] = sudokuTable[i][j];
            // Израз за присъждане на числата от двумерния масив (табличен) в тримерен - по клетки (3х3)
            // 3х3 Клетките (9 на брой) се обозначават с индекси 0,0 ; 0,1 ; 0,2 ; 1,0 ; 1,1 ; 1,2 ; 2,1 и 2,2
            // Третия индекс отговаря на номера на елемента в клетката (от 0 до 8)
            // Изразът по-горе преизчислява индексите на двумерния масив sudokuTable така че да отговарят на тримерния sudokuCells
            // Съответния елемент на sudokuTable се присъжда на елемент от sudokuCells
        }
    }

    // Визоализиране на судоко таблица
    cout << "Sudoko Table:\n"; // \n;\n\n се използва за свободен ред отдолу "cout << endl;"
    for (int i = 0; i < 9; ++i) {
        if (i % 3 == 0)
            cout << "-------------------------\n";
        cout << "| ";

        for (int j = 0; j < 9; ++j) {
            cout << sudokuTable[i][j] << " ";
            if (j % 3 == 2)
                cout << "| ";
        }
        cout << endl;
    }
    cout << "-------------------------\n";
    // Край на Визуализиране на судоку таблицата

    int count_r = 0;    // брояч за повторения по редове
    int count_c = 0;    // брояч за повторения по колони (и малко по-късно по клетки)

    bool isValid = 1;  // флаг за валидноста на судоку таблицата
    // Проверка на числата дали се повтарят
    for (int d = 1; d < 10; ++d) {
        for (int j = 0; j < 9; ++j) {
            for (int k = 0; k < 9; ++k) {
                if (sudokuTable[j][k] == d) {
                    count_r++;
                }
                if (sudokuTable[k][j] == d) {
                    count_c++;
                }

            }
            if (count_r > 1) {
                cout << "The number " << d << " appears " << count_r << " times is row " << j + 1 << endl;
                isValid = 0; //повече от 1? Судоку решението не е валидно
            }
            if (count_c > 1) {
                cout << "The number " << d << " appears " << count_c << " times is column " << j + 1 << endl;
                isValid = 0; //повече от 1? Судоку решението не е валидно
            }
            count_r = 0;
            count_c = 0;
        }
    }


    // Проверка дали всички числа от 1 до 9 са въведени само веднъж във всяка 3х3 клетка

    for (int d = 1; d < 10; ++d) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                for (int l = 0; l < 9; ++l) {
                    if (sudokoCell[j][k][l] == d)
                        count_c++;
                }
                if (count_c > 1) {
                    cout << "The number " << d << " appears " << count_c << " times in cell " << j + 1 << ", " << j + 1
                         << endl;
                }
                count_c = 0;
            }
        }
    }
    // Извеждане на резултата от проверката
    if (isValid) {
        cout << "The solution is correct!";
    } else {
        cout << "The solution is incorrect!";
    }
    return 0;
}


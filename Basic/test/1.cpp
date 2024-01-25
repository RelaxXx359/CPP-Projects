#include <iostream>

using namespace std;

int main() {
    int n; // инициализираме редове
    int m; // инициализираме колони

    // потребителят въвежда колко голям ще е масивът
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter cols: ";
    cin >> m;

    int **arr = new int *[n];

    // Масивът се обхожда, за да се въведат стойности от потребителя
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter values: ";
            cin >> arr[i][j];
        }
    }

    // С for цикъла обхождаме масива.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < 0) // ако елементът е отрицателно число, проверяваме дали индексът е нечетен.
            {
                if (i % 2 != 0) // ако индексът е нечетен, прибавяме числото към общата сума
                    sum += arr[i][j];
                // cout << arr[i][j] << " ";
            }
        }
    }
    cout << "Sum is: " << sum << endl; // принтираме резултат

    return 0;
}
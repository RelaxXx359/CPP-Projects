#include <iostream>

using namespace std;

int main(){
    int m, n, k,
    arr[100][100],

    sum=0,
    maxSum = INT_MIN;

    cout << "Vyvedete razmerite na matricata: " << endl;
    cin >> m >> n;
    cout << "Vyvedete razmena na podmatricata (po malyk ili raven na razmera na osnovnata matrica): " << endl;
    cin >> k;
    cout << "Vyvedete elementite na matricata: " << endl;


    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= m - k ; i++){
        for (int j = 0; j <= n - k; j++){
            for (int l = i; l <k + i; l++){
                for (int o = j; o < k + j ; o++){
                    sum = sum + arr[l][o];
                }
            }
            if (sum > maxSum)
                maxSum = sum;
            sum = 0;
        }
    }
    cout << "Maksimalantaa suma e: " << maxSum<< endl;
    system("pause");






    return 0;
}
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    float mean = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        mean += arr[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > mean){
            cout << arr[i]<< " ";
        }
        cout << "|n ";
    }


    return 0;
}
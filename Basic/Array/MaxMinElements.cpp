#include <iostream>

using namespace std;

int main() {

    //  Два варианта на масива,
    //  с въвеждане на елементите от конзолата
    //  и чийто стойности са въведени предварително


    int n;
    cout << "Enter elements:" << " " << endl;
    cin >> n;

    int arr[100];

    int maxElement = 0;
    int maxIndex = 0;
    int minElement = 0;
    int minIndex = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (maxElement < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    minElement = arr[0];
    for (int i = 0; i < n; ++i) {
        if (minElement > arr[i]) {
            minElement = arr[i];
            minIndex = i;
        }
    }
    cout << "Max element: " << maxElement << " Index: " << maxIndex << endl;
    cout << "Min element: " << minElement  << " Index: " << minIndex << endl;





//    int arr[5] = {12, 32, -68, 59, 958};
//
//    int maxElement = 0;
//    int maxIndex = 0;
//
//    int minElement = 0;
//    int minIndex = 0;
//
//    for (int i = 0; i < 5; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < 5; ++i) {
//        if (maxElement < arr[i]) {
//            maxElement = arr[i];
//            maxIndex = i;
//        }
//    }
//    for (int i = 0; i < 5; ++i) {
//        if (minElement > arr[i]) {
//            minElement = arr[i];
//            minIndex = i;
//        }
//    }
//    cout << "Max element: " << maxElement << " Index: " << maxIndex << endl;
//    cout << "Min element: " << minElement << " Index: " << minIndex << endl;



return 0;
}

#include <iostream>
#include <string>
#include <ntgdi.h>
#include <string>

using namespace std;

//Първа задача Hello Word!

void printHello() {
    cout << "Hello Word!" << endl;
}
int main(){
    printHello();

    return 0;
}


//Втора задача, събиране на a + b

//void printHello() {
//    cout << "Hello Word!" << endl;
//}
//
//int sum(int a, int b){
//
//    return a+b;
//}
//int main(){
//    printHello();
//    cout << sum(5,10);
//
//    return 0;
//}



//Трета задача
//Принтиране на триъгълник
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

void printLine(int start, int end) {

    for (int i = start; i <= end; ++i) {
        cout << " " << i;
    }
    cout << endl;
}


int main() {

    int n;
    cin >> n;

    for (int line = 1; line <= n; ++line) {
        printLine(1, line);
    }
    for (int line = n - 1; line >= 1; line--) {
        printLine(1, line);
    }
    return 0;
}


//Четвърта задача, въвеждаш две чифри и отпечатва най голямото
// пример: 10,15
//        max(10,15):15

//int getMax(int a, int b) {
//
//    if (a > b)
//        return a;
//    return b;
//}
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << "max(" <<  a << "," << b << "):" << getMax(a, b);
//
//
//    return 0;
//}



//Пета задача???

//int getMax(int a, int b) {
//
//    if (a > b)
//        return a;
//    return b;
//}
//
//int getMax(double a, double b, double c) {
//    if (a > b && a > c)
//        return a;
//
//    if (b > a && b > c)
//        return b;
//
//    if (c > a && c > b)
//        return c;
//}
//
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//    cout << "max(" << a << "," << b << "):" << getMax(a, b);
//    cout << "max(" << a << "," << b << "," << c << "):" << getMax(a, b, c);
//
//
//    return 0;
//}




//Шеста задача
//float findX(float a, float b) {
//
//    return (-b / a);
//
//}
//int main() {
//
//    int a, b;
//    cin >> a >> b;
//    cout << findX(a, b) << endl;
//    return 0;
//}



//Седма задача??
//string printLastDigit(int number) {
//
//    int n = number % 10;
//
//    switch (n) {
//        case 0:
//            return << "nula" << endl;
//            break;
//        case 1:
//            return << "edno" << endl;
//            break;
//        case 2:
//            return << "dve" << endl;
//            break;
//        case 3:
//            return << "tri" << endl;
//            break;
//        case 4:
//            return << "chetiri" << endl;
//            break;
//        default:
//            return << "error" << endl;
//            break;
//    }
//}
//int main() {
//
//    int a;
//    cin >> a;
//    cout << printLastDigit(a);
//    return 0;
//}



//Осма задача, масив с нарастващи елементи, намерете брой на интервалите
//{1,2,3  ,5,6,7,8   ,10} тук са 3 итервалите

int findNumber(int arr[], int size) {
    int cout = 1;
    for (int i = 1; i < size; ++i) {
        if (arr[i] - arr[i - 1] > 1)
            cout++;
    }
    return cout;
}

int main() {
    int size = 9;
    int arr[] = {3, 4, 6, 7, 8, 9, 11, 22, 33};


    cout <<"Тhe intervals are: " << findNumber(arr,size);


    return 0;
}


// Девета задача
// сортиране на масиви
// бъбъл сорт
// 4 2 5 3 1
// 2 4 5 3 1
// 2 4 3 5 1
// ..

//въвеждаме колко числа искаме да сортираме примерно 5 и после пет цифри
//int main() {
//
//    int arr[100];
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//
//    int temp;
//    for (int i = 0; i < n; ++i) {
//        for (int k = 0; k < n; ++k) {
//            if (arr[k] < arr[k - 1]) {
//                temp = arr[k];
//                arr[k] = arr[k - 1];
//                arr[k - 1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

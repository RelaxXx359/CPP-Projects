#include <iostream>
#include <List>

using namespace std;

template<typename T>
void printList(const std::list<T> &listRef);


int main() {

//    list<int> myList;
//    int number;
//    cin >> number;
//    while (number != 0){
//        myList.push_back(number);
//        cout << "enter number or 0 for end" << endl;
//        cin >> number;
//    }


    list<int> myList;
    int number = 1;
    while (number != 0) {
        cout << "enter number or 0 for end" << endl;
        cin >> number;
        if (number != 0) {
            myList.push_back(number);
        } else {
            break;
        }
    }

//    printList(myList);

//    int sum = 0;
//
//    size_t listSize = myList.size();
//    for (int i = 0; i < listSize; ++i) {
//        sum = sum + myList.front();
//    }
//    cout << sum << endl;

    //       printList(myList);

    int sum2 = 0;
    for (int elem: myList) {
        cout << "element is " << elem << endl;
        elem = 99;
        sum2 = sum2 + elem;
    }
    cout << endl;
    cout << sum2 << endl;


    int sum3 = 0;
    for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        // sum3 += *it;
        sum3 += sum3 + *it;
        *it = 22222;
    }
    cout << sum3 << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main(){

    // Въвеждаме от конзолата индекс и излиза буквата на коя позици я в азбуката е.

    int b;
    cin >>b;

    char a[15] = {'a','b','c','d','e','f','g','h','i','j','k','e',
                  'm','n','o'};

    cout << a[b-1] << endl;


    return 0;
}
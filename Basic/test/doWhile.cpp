#include <iostream>

using namespace std;
int main(){

    int counter = 1;

    while (true) {
        counter++;
        if (counter == 5){
            break;
        }
    }
    cout << counter << endl;

return 0;
}
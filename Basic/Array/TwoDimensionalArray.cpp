#include <iostream>

class samp{
    int a;

public:
    samp(int n){
        this->a = n;
    }

    int getA(){
        return a;
    }
};

int main() {
    samp arr[4][2] = {1,2,
                      3,4,
                      5,6,
                      7,8,};

    int i;
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i][0].getA() << ' ';
        std::cout << arr[i][1].getA() << '\n';
    }
    std::cout << "\n";
    return 0;
}
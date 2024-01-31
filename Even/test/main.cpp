//#include <iostream>
//class myclass{
//public:
//    void setA(int num);
//    int getA();
//private:
//    int a;
//};
//
//
//
//void myclass::setA(int num) {
//    this->a = num;
//}
//int myclass::getA() {
//    return a;
//}
//
//int main(){
//
//    myclass obj1, obj2;
//
//    obj1.setA(10);
//    obj2.setA(20);
//
//    std::cout << obj1.getA() << std::endl;
//    std::cout << obj2.getA() << std::endl;



//#include <iostream>
//class samp{
//    int a;
//
//public:
//    samp(int n){
//        a=n;
//    }
//    int getA(){
//        return a;
//    }
//
//};
//int main(){
//
//    samp obj[4] = {-1,-2,-3,-4,};
//    int j;
//
//    for (int j = 0; j < 4; ++j) {
//        std::cout << obj[j].getA() << ' ';
//    }
//    std::cout << "\n";
//
//    return 0;
//}



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


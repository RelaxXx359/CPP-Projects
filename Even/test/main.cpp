#include <iostream>

class myclass{
public:
    void setA(int num);
    int getA();
private:
    int a;
};

void myclass::setA(int num) {
    this->a = num;
}
int myclass::getA() {
    return a;
}

int main(){

    myclass obj1, obj2;

    obj1.setA(10);
    obj2.setA(20);

    std::cout << obj1.getA() << std::endl;
    std::cout << obj2.getA() << std::endl;

    return 0;
}
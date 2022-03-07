#include <iostream>

class Int {
public:
    int data;
public:
    void setZero() { data = 0; };
    void initData() {
        std::cout << "Enter your number: ";
        std::cin >> data;
    };
    void putData() { std::cout << "Your Int number is " << data << std::endl; };
};

int main() {
    Int num1,num2,num3;
    num1.setZero();
    num2.setZero();
    num3.setZero();

    num1.initData();
    num2.initData();

    num3.data = num1.data + num2.data;
    num3.putData();

    return 0;
}

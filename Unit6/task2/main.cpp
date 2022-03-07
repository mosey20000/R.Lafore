#include <iostream>

class tollBoth {
private:
    short int carAmount;
    double tax;
public:
    tollBoth() : carAmount(0), tax(0) {};
public:
    void payingCar() { tax += 0.50; carAmount++; };
    void nopayCar() { carAmount++; };
    void display() {
        std::cout << "Cars amount: " << carAmount << std::endl;
        std::cout << "Tax: " << tax << std::endl;
    }
};

int main() {
    tollBoth cars;
    bool flag = false;
    char option1;
    int option2;
    while (flag != true) {
        std::cout << "Do you want to add one more car?" << std::endl;
        std::cin >> option1;
        switch (option1) {
            case '+':
                std::cout << "This car have taxes?" << std::endl;
                std::cout << "1) Yes." << std::endl;
                std::cout << "2) No." << std::endl;
                std::cin >> option2;
                switch (option2) {
                    case 1:
                        cars.payingCar();
                        break;
                    case 2:
                        cars.nopayCar();
                        break;
                    default:
                        perror("Uncorrect data.\n");
                        exit(-1);
                        break;
                }
                break;
            case '-':
                flag = true;

        }
    }
    cars.display();
    return 0;
}

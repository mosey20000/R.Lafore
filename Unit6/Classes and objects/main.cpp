#include <iostream>


// Определение класса в программе
class smallobject {
private: // Защита доступа от исп в других частях программы.
    // Одно поле данных
    int data;
public:
    // Два метода
    void setdata(int d) { data = d; }
    void putdata() { std::cout << "Your number is " << data << std::endl; }
};


int main() {
    smallobject obj1, obj2; // Определение двух объектов класса smallobject - obj1, obj2
    obj1.setdata(100);
    obj2.setdata(150);

    obj1.putdata();
    std::cout << std::endl << std::endl;
    obj2.putdata();

    return 0;
}

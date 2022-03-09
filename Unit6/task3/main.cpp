#include <iostream>

class time {
public:
    int hours, minutes, seconds;
    time() : hours(0), minutes(0), seconds(0) {} ;
    time(int a, int b, int c) : hours(a), minutes(b), seconds(c) {};
public:
    void display() { std::cout << hours << ":" << minutes << ":" << seconds << std::endl; };
    void sumTime(time t1, time t2) {
        bool trigger = false;
        seconds = t1.seconds + t2.seconds;
        if (seconds >= 60) {
            seconds = seconds - 60;
            trigger = true;
        }
        minutes = t1.minutes + t2.minutes;
        if (trigger == true) {
            minutes = minutes + 1;
        }
        if (minutes >= 60) {
            hours++;
            minutes = minutes - 60;
        }
        hours = t1.hours + t2.hours;
        if (hours >= 24)
            hours = hours - 24;
    }
};

int main() {
    class time t1(20,10,51), t2 (10,55,12), t3;
    t3.sumTime(t1,t2);
    t3.display(); 
    return 0;
}

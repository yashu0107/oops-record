#include <iostream>
using namespace std;

class Time {
    int hr, min, sec;
public:
   
    Time() {
        hr = 0;
        min = 0;
        sec = 0;
    }

    
    Time(int h, int m, int s) {
        hr = h;
        min = m;
        sec = s;
    }


    friend bool operator==(Time &t1, Time &t2) {
        return (t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec);
    }

    void display() {
        cout << hr << " hr : " << min << " min : " << sec << " sec" << endl;
    }
};

int main() {
    Time t1(3, 45, 20);
    Time t2(3, 45, 20);
    Time t3(4, 20, 10);

    cout << "Time 1: "; t1.display();
    cout << "Time 2: "; t2.display();
    cout << "Time 3: "; t3.display();

    if (t1 == t2)
        cout << "Time 1 and Time 2 are equal." << endl;
    else
        cout << "Time 1 and Time 2 are not equal." << endl;

    if (t1 == t3)
        cout << "Time 1 and Time 3 are equal." << endl;
    else
        cout << "Time 1 and Time 3 are not equal." << endl;

    return 0;
}

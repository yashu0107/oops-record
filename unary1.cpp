#include <iostream>
using namespace std;

class Value {
    int num;
public:
    void set(int n) {
        num = n;
    }

    void display() {
        cout << "Value is: " << num << endl;
    }

    
    void operator-() {
        num = -num;
    }
};

int main() {
    Value v;
    v.set(25);

    cout << "Before applying unary minus operator:" << endl;
    v.display();

    -v; 
    cout << "After applying unary minus operator:" << endl;
    v.display();

    return 0;
}

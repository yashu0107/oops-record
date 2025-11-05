#include <iostream>
using namespace std;


inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    cout << "Sum of " << x << " and " << y << " is " << add(x, y) << endl;
    return 0;
}

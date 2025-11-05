#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

   
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else
            cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.6, 4.2);
    Complex result;

    result = c1 + c2;
    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}

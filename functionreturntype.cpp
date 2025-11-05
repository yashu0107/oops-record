#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), img(i) {}

    Complex addcomplex(Complex c2) {
        Complex result;
        result.real = real + c2.real;
        result.img = img + c2.img;
        return result; 
    }

    void display() const {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << (-img) << "i" << endl;
    }
};

int main() {
    Complex num1(3, 5);
    Complex num2(4, 2);

    cout << "First complex number: ";
    num1.display();

    cout << "Second complex number: ";
    num2.display();

    Complex sum = num1.addcomplex(num2);

    cout << "\nSum (object returned): ";
    sum.display();

    return 0;
}

#include <iostream>
using namespace std;

class Complex {
    float Real, Image;
public:
    Complex(float real = 0, float image = 0) {
        Real = real;
        Image = image;
    }
    void show() {
        cout << "Real = " << Real << '\t' << "Image = " << Image << endl;
    }
    operator float(); // 成员函数，类型转换函数：Complext -> float
};

Complex::operator float() {
    return Real * Real + Image * Image;
}

int main() {
    Complex c(10, 20);
    c.show();
    cout << c << '\n';
    
    return 0;
}
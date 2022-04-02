#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace fgias {

class Complex {
private:
    double re; // real part
    double im; // imaginary part
public:
    Complex();
    Complex(double re, double im);
    Complex(const Complex& other);
    const Complex& operator=(const Complex& other);
    double getRe() const {return re;};
    double getIm() const {return im;};
};

ostream& operator<<(ostream& out, const Complex& z);

Complex operator+(const Complex& z1, const Complex&z2);
Complex operator+(const Complex& z1, const double d);
Complex operator+(const double d, const Complex& z1);

} // namespace fgias

#endif
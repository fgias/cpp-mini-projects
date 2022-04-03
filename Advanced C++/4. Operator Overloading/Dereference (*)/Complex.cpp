#include "Complex.h"

namespace fgias {

ostream& operator<<(ostream& out, const Complex& z) {
    out << "(" << z.getRe() << "," << z.getIm() << ")";
    return out;
}

Complex operator+(const Complex& z1, const Complex& z2) {
    double re = z1.getRe() + z2.getRe();
    double im = z1.getIm() + z2.getIm();
    Complex z(re, im);
    return z;
}

Complex operator+(const Complex& z1, const double d) {
    double re = z1.getRe() + d;
    double im = z1.getIm();
    Complex z(re, im);
    return z;
}

Complex operator+(const double d, const Complex& z1) {
    double re = z1.getRe() + d;
    double im = z1.getIm();
    Complex z(re, im);
    return z;    
}


Complex::Complex(): re(0), im(0) {

}

Complex::Complex(double re, double im): re(re), im(im) {

}

Complex::Complex(const Complex& other) {
    re = other.re;
    im = other.im;
}

const Complex& Complex::operator=(const Complex& other) {
    re = other.re;
    im = other.im;
    return *this;
}

bool Complex::operator==(const Complex& other) const {
    return ((re == other.getRe()) && (im == other.getIm()));
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

Complex Complex::operator*() const {
    return Complex(re, -im);
}

}
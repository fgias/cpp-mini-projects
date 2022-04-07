#include "Complex.h"

namespace fgias {

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

ostream& operator<<(ostream& out, const Complex& z) {
    out << "(" << z.getRe() << "," << z.getIm() << ")";
    return out;
}

}
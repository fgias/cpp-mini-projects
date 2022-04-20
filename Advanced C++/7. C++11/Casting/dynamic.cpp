#include <iostream>
using namespace std;

class Parent { // you need polymorphic classes to use dynamic_cast
public:
    virtual void speak() { // i.e. you need to have methods being virtual
        cout << "parent" << endl;
    }
};

class Brother: public Parent {

};

class Sister: public Parent {

};

void test(Parent&&) {
    cout << "test" << endl;
}

int main() {

    Parent parent;
    Brother brother;


    Parent* ppp = &parent;
    Brother* pbb = dynamic_cast<Brother*>(ppp);
    // "dynamic cast": it does runtime type checking
    // makes sure that we are doing somthing sensible
    // returns null pointer when the operation is potentially unsafe

    if (pbb == nullptr) {
        cout << "invalid cast" << endl;
    }
    else {
        cout << "valid cast: " << pbb << endl;
    }


    Parent* ppb = &brother;
    pbb = dynamic_cast<Brother*>(ppb);

    if (pbb == nullptr) {
        cout << "invalid cast" << endl;
    }
    else {
        cout << "valid cast: " << pbb << endl;
    }

    return 0;
}

/*

C++ supports four types of casting:

1.Static Cast
2. Dynamic Cast
3. Const Cast
4. Reinterpret Cast

Static Cast: This is the simplest type of cast that can be used. 
It is a compile-time cast. It does things like implicit conversions 
between types (such as int to float, or pointer to void*), and it can 
also call explicit conversion functions (or implicit ones).

Dynamic Cast: A cast is an operator that converts data from one type to 
another type. In C++, dynamic casting is mainly used for safe downcasting 
at run time. To work on dynamic_cast there must be one virtual function in 
the base class. A dynamic_cast works only polymorphic base class because it 
uses this information to decide safe downcasting.

Reinterpret Cast: It is used to convert a pointer of some data type into 
a pointer of another data type, even if the the data types before and 
after conversion are different. It does not check if the pointer type 
and data pointed by the pointer is same or not.

Const Cast: const_cast is used to cast away the constness of variables. 

- Downcasting: Casting a base class pointer (or reference) to a 
derived class pointer (or reference) is known as downcasting. 

- Upcasting: Casting a derived class pointer (or reference) to a base 
class pointer (or reference) is known as upcasting. 

*/
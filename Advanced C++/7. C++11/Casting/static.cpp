#include <iostream>
using namespace std;

class Parent {
public:
    void speak() {
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
    // from c, also used in c++
    float value = 3.23;
    cout << value << endl;
    cout << (int)value << endl;
    cout << int(value) << endl;

    // c++: more precisely defined casting
    cout << endl;
    cout << static_cast<int>(value) << endl; // equivalent to c-style cast: (int)value
    // "static cast": it is a compile time cast
    // potential to lead to bugs, you have to check what the cast is doing

    cout << endl;
    Parent parent;
    Brother brother;

    Parent* pp = &brother;
    // Brother* pb = &parent; // not going to work
    Brother* pb = static_cast<Brother*>(&parent); // dangerous

    Parent* ppb = &brother;
    Brother* pbb = static_cast<Brother*>(ppb); // also dangerous
    cout << pbb << endl;

    cout << endl;
    Parent&& p = Parent();
    Parent&& p2 = static_cast<Parent&&>(parent);
    p2.speak();

    cout << endl;
    test(Parent());
    test(static_cast<Parent&&>(parent));

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
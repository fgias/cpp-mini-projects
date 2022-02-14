#include <iostream>
using namespace std;


void fn() {
    cout<<"seen"<<'\n';
}


void principalFn(void (*ptr)()) {
    
    cout<<"principal function"<<'\n';

    fn();
    (*ptr)();
}

void cb() {
    cout<<"callback function"<<'\n';
}


int main() {

    void (*ptr)() = &cb;

    principalFn(cb);

   return 0;
}
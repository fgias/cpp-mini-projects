#include <iostream>
using namespace std;

int main() {

    int values[] = {4, 7, 3, 4};

    cout << "sizeof(values[4]): " << sizeof(values) << endl;
    cout << "each int is 4 bytes" << endl;
    
    for (int i=0; i<sizeof(values)/sizeof(int); i++) {
        cout << values[i] <<  " " << flush;
    }
    
    cout << endl;

    return 0;
}

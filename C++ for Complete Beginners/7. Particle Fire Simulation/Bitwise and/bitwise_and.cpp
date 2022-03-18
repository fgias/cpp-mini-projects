#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int color = 0x123456;

    int red = (color & 0xFF0000) >> 8*2; // color: 0x123456, mask: 0xFF000000 (&)=> 0x120000
    int green = (color & 0x00FF00) >> 8*1; // color: 0x123456, mask: 0x00FF00 (&)=> 0x003400
    int blue = color & 0x0000FF; // color: 0x123456, mask: 0x0000FF (&)=> 0x000056

    // example:
    // color:       10101110-01110010-01001001-00100011
    // mask:        11111111-11111111-00000000-00000000
    // result (&):  10101110-01110010-00000000-00000000

    cout << hex << red << endl;
    cout << hex << green << endl;
    cout << hex << blue << endl;


    return 0;
}


// logical AND: &&
// logical OR: ||
// logical NOT: !

// bitwise AND: &
// bitwise OR: |
// bitwise NOT: ~
// bitwise XOR: ^
// bitwise left shift: <<
// bitwise right shift: >>
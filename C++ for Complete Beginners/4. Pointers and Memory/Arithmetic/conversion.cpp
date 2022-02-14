#include <iostream>
#include <sstream>
using namespace std;

string toString(int time);

int main() {

    cout << toString(15634) << endl;

    return 0;
};

// The binary / operator yields the quotient, 
// and the binary % operator yields the remainder from the division of the first expression by the second.
// (a/b)*b + a%b == a.

string toString(int time) {
    int hours = time/3600;
    int minutes = (time%3600)/60;
    int seconds = (time%3600)%60;
    
    stringstream ss;
    ss << hours << " hour(s), " << minutes << " minute(s), and ";
    ss << seconds << " second(s).";
    return ss.str();
};
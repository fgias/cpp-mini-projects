#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string filename = "stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open()) {
        return 1;
    }

    while(input) { // bool operator is overloaded, meaning: !input.eof()
        string line;

        getline(input, line, ':'); // string: " ", char: ' '
        
        string population;
        input >> population;

        input.get(); // get the '\n' new line character and discard it
        // input >> ws; // read white space

        cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;

        if (!input) {
            break;
        }

    }

    input.close();

    return 0;
}
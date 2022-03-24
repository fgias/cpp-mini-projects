#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // writing

    ofstream outFile; // output file stream
    // or: fstream outFile;

    string fileName = "text.txt";
    outFile.open(fileName);
    // outFile.open(outFileName, ios::out);

    if (outFile.is_open()) {
        outFile << "Hello there." << endl;
        outFile << "This is the second line." << endl;
        outFile << "And a number: " << 123 << ".";
        outFile.close();
    } 
    else {
        cout << "Could not create file: " << fileName << endl;
    }


    // reading

    ifstream inFile; // input file stream
    // or: fstream inFile;

    inFile.open(fileName);
    // inFile.open(fileName, ios::in)

    if(inFile.is_open()) {
        string line;

        // inFile >> line; // extraction operator

        while(!inFile.eof()) { // not at the end-of-file
        // or `while(inFile)`, because of this bool operator being overloaded
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }
    else {
        cout << "Could not open file: " << fileName << endl;
    }
    return 0;
}
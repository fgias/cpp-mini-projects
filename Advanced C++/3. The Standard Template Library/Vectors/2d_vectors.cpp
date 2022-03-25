#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector< vector<int> > grid(3, vector<int>(4,7)); // 3 rows, 4 columns

    grid[1].push_back(8);

    for (int row=0; row<grid.size(); row++){
        for (int col=0; col<grid[row].size(); col++) {
            cout << grid[row][col] << " " << flush;
        }
        cout << endl;
    }


    // exercise
    cout << endl;

    vector< vector<int> > table(12, vector<int>(12,0));

    for (int row=0; row<table.size(); row++) {
        for (int col=0; col<table[row].size(); col++) {
            table[row][col] = (row + 12) * (col + 12);
        }
    }

    for (int row=0; row<table.size(); row++) {
        for (int col=0; col<table[row].size(); col++) {
            cout << table[row][col] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}
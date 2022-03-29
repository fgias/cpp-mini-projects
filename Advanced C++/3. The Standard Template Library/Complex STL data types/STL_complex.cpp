#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    map<string, vector<int> > scores;

    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Mike"].push_back(12);
    scores["Vicky"].push_back(15);

    for (map<string, vector<int> >::iterator it_m = scores.begin(); it_m != scores.end(); it_m++ ) {
        string name = it_m-> first;
        vector<int> scoreList = it_m->second; 
        cout << name << ": " << flush;
        for (vector<int>::iterator it_v = scoreList.begin(); it_v != scoreList.end(); it_v++) {
            cout << *it_v << " " << flush;
        }
        cout << endl;
    }
    
    return 0;
}
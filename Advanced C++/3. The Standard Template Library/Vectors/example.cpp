#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums(3);

    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;

    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);

    cout << nums.size() << endl;
    cout << endl;

    for (vector<int>::iterator it = nums.begin(); it!=nums.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}

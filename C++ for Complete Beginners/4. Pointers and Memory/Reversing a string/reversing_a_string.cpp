#include <iostream>
using namespace std;

int main() {
    char text[] = "hello!";

    int nChars = sizeof(text)/sizeof(text[0]) - 1;

    // using pointers
    char *pStart = text;
    char *pEnd = text + nChars - 1;

    while(pStart < pEnd) {
        //swap
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        //increment
        pStart ++;
        pEnd --;
    }

    cout << text << endl;

    //using array indexing
    char text2[] = "Fotis!";
    nChars = sizeof(text2)/sizeof(text2[0]) - 1;


    int left = 0;
    int right = nChars - 1;
    while(left < right) {
        char save = text2[left];
        text2[left] = text2[right];
        text2[right] = save;

        left ++;
        right --;
    }

    cout << text2 << endl;

    return 0;
}
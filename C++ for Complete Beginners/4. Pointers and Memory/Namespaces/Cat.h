#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace fgias {

const string CATNAME = "Freddy";

class Cat {
public:
    Cat();
    ~Cat();
    void speak();
};

}

#endif
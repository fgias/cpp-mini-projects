#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace fgias2 {

const string CATNAME = "Tiddles";    

class Cat {
public:
    Cat();
    ~Cat();
    void speak();
};

} // namespace fgias

#endif
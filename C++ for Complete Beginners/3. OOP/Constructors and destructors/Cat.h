#ifndef CAT_H_
#define CAT_H_

class Cat {
    private:
    bool happy; // "data member" > "instance variable"

    public:
    void speak();
    Cat(); // "constructor", no return type
    ~Cat(); // "destructor"
};

#endif
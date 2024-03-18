#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Human : public race {
public:
    Human(string name_) : race(name_, "human", "Nothing special") {}
    void skill() {
        cout << "I wanna some pizza..." << endl;
    }
};

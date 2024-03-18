#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Undead : public race {
public:
    Undead(string name_) : race(name_, "undead", "This race is very vulnerable to the attacks of the holy element. Fire also works well against them") {}
    void skill() {
        cout << "*No reaction...*" << endl;
    }
};


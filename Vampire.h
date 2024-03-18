#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Vampire : public race {
public:
    Vampire(string name_) : race(name_, "vampire", "This race is hard to kill under most circumstances, you are undead and must drink blood for nourishment") {}
    void skill() {
        cout << "*Turns into a bat*" << endl;
    }
};

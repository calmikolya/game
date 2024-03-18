#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Giant : public race {
public:
    Giant(string name_) : race(name_, "giant", "A race of humanoid creatures of exceptionally large size") {}
    void skill() {
        cout << "*Invulnerability to physical damage*" << endl;
    }
};
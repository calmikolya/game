#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Demon : public race {
public:
    Demon(string name_) : race(name_, "demon", "Anything that is not a monster or a human is considered a demon") {}
    void skill() {
        cout << "*Summoning the Shadow...*" << endl;
    }
};

#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Argonian : public race {
public:
    Argonian(string name_) : race(name_, "argonian", "A race of intelligent cold-blooded oviparous reptilians, perfectly adapted to life in water") {}
    void skill() {
        cout << "*A spit of poison...*" << endl;
    }
};
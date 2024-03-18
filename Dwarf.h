#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Dwarf : public race {
public:
    Dwarf(string name_) : race(name_, "dwarf", "Brave, hardy and undersized, dwarves are known as skilled warriors, miners, and workers of stone and metal") {}
    void skill() {
        cout << "*The sound of a hammer on metal*" << endl;
    }
};
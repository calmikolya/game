#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Elf : public race {
public:    
    Elf(string name_) : race(name_, "elf", "A magical race with otherworldly grace who exist in the world but are not fully a part of it") {}
    void skill() {
        cout << "*A shot a bow*" << endl;
    }
};
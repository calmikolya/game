#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Khajiit : public race {
public:
    Khajiit(string name_) : race(name_, "khajiit", "A race of feline humanoids hailing, well-known for their keen intelligence and agility") {}
    void skill() {
        cout << "*Meow...*" << endl;
    }
};

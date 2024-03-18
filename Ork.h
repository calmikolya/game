#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Ork : public race {
public:
    Ork(string name_) : race(name_, "ork", "A race of green-skinned barbarians, a brutish and bellicose species whose only collective purpose is to wage war on everything else in the universe") {}
    void skill() {
        cout << "WAAAAAAAAAAAAAAAAAAAAAAAAGH...!" << endl;
    }
};

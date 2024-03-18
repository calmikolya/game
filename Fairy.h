#pragma once
#include <iostream>
#include "Race.h"

using namespace std;

class Fairy : public race {
public:
    Fairy(string name_) : race(name_, "fairy", "A race that innately magical, infused with whimsical energy, fueled by impulse and emotion, and have the incredible ability to fly") {}
    void skill() {
        cout << "*A quiet laugh*" << endl;
    }
};

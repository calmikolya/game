#pragma once
#include <iostream>
using namespace std;

class race {
public:
    race(string name_, string race_name_, string feature_) { _name = name_; _race_name = race_name_; _feature = feature_; }
    virtual void skill() {};
    string _name;
    string _feature;
    string _race_name;
    race() {}
};

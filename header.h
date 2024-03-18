#pragma once

#include <iostream>
#include <string>

class race {
public:
    std::string name;
    std::string race_name;
    std::string feature;
    race(std::string name_, std::string race_name_, std::string feature_);
    virtual void skill() = 0;
};

class argonians : public race {
public:
    argonians(std::string name_) : race(name_, "аргонианец", "хвост") {}
    void skill();
};

class humans : public race {
public:
    humans(std::string name_) : race(name_,  "человек", "никакая") {}
    void skill()
};
class orks : public race {
public:
    orks(std::string name_) : race(name_, "орк", "клыки") {}
    void skill()
};
class elves : public race {
public:    elves(std::string name_) :
    race(name_, "эльф", "уши") {}
    void skill()
};
class khadjits : public race {
public:
    khadjits(std::string name_) : race(name_,"каджит", "лапы") {}
    void skill()
};
class dworves :
public race {
public:
    dworves(std::string name_) : race(name_,  "гном", "низкий") {}
    void skills()
};
class fairies : public race {
public:
    fairies(std::string name_) :
    race(name_, "фея", "крылья") {}
    void skills()
};
class demons : public race {
public:
    demons(std::string name_) : race(name_, "демон", "рога")) {}
    void skills()
};
class vampires :
public race {
public:
    vampires(std::string name_) :
    race(name_, "вампир", "бледная кожа") {}
    void skill()
};
class undead : public race {
public:
    undead(std::string name_) :
    race(name_, "нежить", "красные глаза") {
    }
    void skill()
};
class giants : public race {
public:
    giants(std::string name_) :
    race(name_, "великан", ",большой") {}
    void skill()
};

void make_hero(race* u_player, race hero);

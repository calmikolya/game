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
<<<<<<< HEAD
    humans(string name_) : race(name_,  "человек", "никакая") {}
=======
    humans(std::string name_) : race(name_,  "человек", "никакая") {}
>>>>>>> class
    void skill()
};
class orks : public race {
public:
<<<<<<< HEAD
    orks(string name_) : race(name_, "орк", "клыки") {}
    void skill()
};
class elves : public race {
public:    elves(string name_) :
=======
    orks(std::string name_) : race(name_, "орк", "клыки") {}
    void skill()
};
class elves : public race {
public:    elves(std::string name_) :
>>>>>>> class
    race(name_, "эльф", "уши") {}
    void skill()
};
class khadjits : public race {
public:
<<<<<<< HEAD
    khadjits(string name_) : race(name_,"каджит", "лапы") {}
=======
    khadjits(std::string name_) : race(name_,"каджит", "лапы") {}
>>>>>>> class
    void skill()
};
class dworves :
public race {
public:
<<<<<<< HEAD
    dworves(string name_) : race(name_,  "гном", "низкий") {}
=======
    dworves(std::string name_) : race(name_,  "гном", "низкий") {}
>>>>>>> class
    void skills()
};
class fairies : public race {
public:
<<<<<<< HEAD
    fairies(string name_) :
=======
    fairies(std::string name_) :
>>>>>>> class
    race(name_, "фея", "крылья") {}
    void skills()
};
class demons : public race {
public:
<<<<<<< HEAD
    demons(string name_) : race(name_, "демон", "рога")) {}
=======
    demons(std::string name_) : race(name_, "демон", "рога")) {}
>>>>>>> class
    void skills()
};
class vampires :
public race {
public:
<<<<<<< HEAD
    vampires(string name_) :
=======
    vampires(std::string name_) :
>>>>>>> class
    race(name_, "вампир", "бледная кожа") {}
    void skill()
};
class undead : public race {
public:
<<<<<<< HEAD
    undead(string name_) :
=======
    undead(std::string name_) :
>>>>>>> class
    race(name_, "нежить", "красные глаза") {
    }
    void skill()
};
class giants : public race {
public:
<<<<<<< HEAD
    giants(string name_) :
=======
    giants(std::string name_) :
>>>>>>> class
    race(name_, "великан", ",большой") {}
    void skill()
};

void make_hero(race* u_player, race hero);

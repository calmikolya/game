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

class Human : public race {
public:
    Human(string name_) : race(name_, "human", "Nothing special") {}
    void skill() {
        cout << "I wanna some pizza..." << endl;
    }
};

class Argonian : public race {
public:
    Argonian(string name_) : race(name_, "argonian", "A race of intelligent cold-blooded oviparous reptilians, perfectly adapted to life in water") {}
    void skill() {
        cout << "*A spit of poison...*" << endl;
    }
};

class Demon : public race {
public:
    Demon(string name_) : race(name_, "demon", "Anything that is not a monster or a human is considered a demon") {}
    void skill() {
        cout << "*Summoning the Shadow...*" << endl;
    }
};

class Dwarf : public race {
public:
    Dwarf(string name_) : race(name_, "dwarf", "Brave, hardy and undersized, dwarves are known as skilled warriors, miners, and workers of stone and metal") {}
    void skill() {
        cout << "*The sound of a hammer on metal*" << endl;
    }
};

class Elf : public race {
public:    
    Elf(string name_) : race(name_, "elf", "A magical race with otherworldly grace who exist in the world but are not fully a part of it") {}
    void skill() {
        cout << "*A shot a bow*" << endl;
    }
};

class Fairy : public race {
public:
    Fairy(string name_) : race(name_, "fairy", "A race that innately magical, infused with whimsical energy, fueled by impulse and emotion, and have the incredible ability to fly") {}
    void skill() {
        cout << "*A quiet laugh*" << endl;
    }
};

class Giant : public race {
public:
    Giant(string name_) : race(name_, "giant", "A race of humanoid creatures of exceptionally large size") {}
    void skill() {
        cout << "*Invulnerability to physical damage*" << endl;
    }
};

class Khajiit : public race {
public:
    Khajiit(string name_) : race(name_, "khajiit", "A race of feline humanoids hailing, well-known for their keen intelligence and agility") {}
    void skill() {
        cout << "*Meow...*" << endl;
    }
};

class Ork : public race {
public:
    Ork(string name_) : race(name_, "ork", "A race of green-skinned barbarians, a brutish and bellicose species whose only collective purpose is to wage war on everything else in the universe") {}
    void skill() {
        cout << "WAAAAAAAAAAAAAAAAAAAAAAAAGH...!" << endl;
    }
};

class race {
public:
    race(string name_, string race_name_, string feature_) { _name = name_; _race_name = race_name_; _feature = feature_; }
    virtual void skill() {};
    string _name;
    string _feature;
    string _race_name;
    race() {}
};

class Undead : public race {
public:
    Undead(string name_) : race(name_, "undead", "This race is very vulnerable to the attacks of the holy element. Fire also works well against them") {}
    void skill() {
        cout << "*No reaction...*" << endl;
    }
};

class Vampire : public race {
public:
    Vampire(string name_) : race(name_, "vampire", "This race is hard to kill under most circumstances, you are undead and must drink blood for nourishment") {}
    void skill() {
        cout << "*Turns into a bat*" << endl;
    }
};

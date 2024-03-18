#include <iostream>
#include "Race.h"
#include "Argonian.h"
#include "Human.h"
#include "Ork.h"
#include "Elf.h"
#include "Khadjit.h"
#include "Demon.h"
#include "Vampire.h"
#include "Undead.h"
#include "Giant.h"
#include "Dwarf.h"
#include "Fairy.h"

using namespace std;

void make_hero(race* u_player, race hero) {
    (*u_player) = hero;
}

int main() {
    string name;
    string to_do;
    string choice;

    cout << "Welcome, traveler! What should I call you?" << endl;
    cin >> name;

    Argonian player_a(name);
    Human player_h(name);
    Demon player_de(name);
    Ork player_o(name);
    Elf player_e(name);
    Khajiit player_k(name);
    Dwarf player_dw(name);
    Fairy player_f(name);
    Vampire player_v(name);
    Undead player_u(name);
    Giant player_g(name);

    race* pplayer{};

    cout << "Please, choose a race:" << '\n';
    string race_arr[11] = { "Human", "Ork", "Elf", "Khajiit", "Dwarf", "Fairy", "Demon", "Vampire", "Undead", "Giant", "Argonian" };
    for (int i = 0; i < 11; i++) {
        cout << race_arr[i] << '\n';
    }
    cin >> choice;

    if (choice == "Argonian") {
        pplayer = &player_a;
    }
    if (choice == "Human") {
        pplayer = &player_h;
    }
    if (choice == "Ork") {
        pplayer = &player_o;
    }
    if (choice == "Elf") {
        pplayer = &player_e;
    }
    if (choice == "Khajiit") {
        pplayer = &player_k;
    }
    if (choice == "Dwarf") {
        pplayer = &player_dw;
    }
    if (choice == "Fairy") {
        pplayer = &player_f;
    }
    if (choice == "Demon") {
        pplayer = &player_de;
    }
    if (choice == "Vampire") {
        pplayer = &player_v;
    }
    if (choice == "Undead") {
        pplayer = &player_u;
    }
    if (choice == "Giant") {
        pplayer = &player_g;
    }

    cout << "Congratulations, "<< (*pplayer)._name << "! " << "You're a(an) " << (*pplayer)._race_name << " now, your feature is: " << (*pplayer)._feature << endl;
    while (true) {
        cout << "To use the skill, write 'Skill': " << endl;
        cin >> to_do;
        if (to_do == "Skill") {
            (*pplayer).skill();
        }
    }
    return 0;
}

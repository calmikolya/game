<<<<<<< HEAD
#include <iostream>
#include "head.h"
using namespace std;
int main() {
    string name;
    string to_do;
    string choice;

    cout << "Введите имя:" << endl;
    cin >> name;

    argonians player_a(name);
    humans player_h(name);
    demons player_de(name);
    orks player_o(name);
    elves player_e(name);
    khadjits player_k(name);
    dworves player_dw(name);
    fairies player_f(name);
    vampires player_v(name);
    undead player_u(name);
    giants player_g(name);

    race* pplayer{};

    cout << "Выберите расу:"<< '\n';
    string race_arr[11] = { "Человек", "Орк", "Эльф", "Каджит", "Гном", "Фея", "Демон", "Вампир", "Нежить", "Великан", "Аргонианин" };
    for (int i = 0; i < 11; i++) {
        cout << race_arr[i] << '\n';
    }
    cin >> choice;

    if (choice == "аргонианин") {
        pplayer = &player_a;
    }
    if (choice == "человек") {
        pplayer = &player_h;
    }
    if (choice == "орк") {
        pplayer = &player_o;
    }
    if (choice == "эльф") {
        pplayer = &player_e;
    }
    if (choice == "каджит") {
        pplayer = &player_k;
    }
    if (choice == "гном") {
        pplayer = &player_dw;
    }
    if (choice == "фея") {
        pplayer = &player_f;
    }
    if (choice == "демон") {
        pplayer = &player_de;
    }
    if (choice == "вампир") {
        pplayer = &player_v;
    }
    if (choice == "нежить") {
        pplayer = &player_u;
    }
    if (choice == "великан") {
        pplayer = &player_g;
    }

    cout << "Вы" << (*pplayer).name << "урожденный" << (*pplayer).race_name << ", ваша особенность: " << (*pplayer).feature << endl;
    while (true) {
        cout << "Чтобы использовать способность, напишите скилл: " << endl;
        cin >> to_do;
        if (to_do == "скилл") {
            (*pplayer).skill();
        }
    }
    return 0;
}


=======
#include <iostream>
#include <vector>
#include "Ochirov.h"
#include "svechnikov.h"
#include "Krivushin.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Fleet fleet;
    Spacecraft ship1;
    ship1.id = 1;
    ship1.name = "Starship 1";
    ship1.capacity = 100;
    ship1.fuel = 100;
    fleet.addSpacecraft(ship1);

    MissionControl control;
    control.createMission("Explore New Galaxy", "Description of the mission");

    Crew crew;
    Pilot pilot1;
    pilot1.id = 1;
    pilot1.name = "John Doe";
    crew.addPilot(pilot1);

    Planet earth;
    earth.name = "Earth";
    earth.distance = 100;
    Life New_Planet;
    New_Planet.water = false;
    New_Planet.distance_from_star = 100000;
    cout << "Is life possible on this planet?" << endl;
    New_Planet.PercentofLife(New_Planet.water, New_Planet.distance_from_star);

    Star sun;
    sun.name = "Sun";
    sun.bright = 10000;

    SpaceStation station;
    station.name = "Space Station Alpha";

    Alien alien;
    alien.name = "Xenon";
    alien.dangerous = 0;

    Mission mission;
    mission.name = "First Contact";
    mission.description = "Seek out and establish communication with alien species.";
    control.missions.push_back(mission);
    cout << "What will be the success of the mission?" << endl;
    control.SuccessMission_ontheplanet(alien.dangerous, sun.bright, ship1.fuel, earth.distance);

    return 0;
}
>>>>>>> class

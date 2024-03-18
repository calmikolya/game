#include "head.h"
race::race(std::string name_, std::string race_name_, std::string feature_) : name(name_), race_name(race_name_), feature(feature_) {}

void argonians::skill() {
    std::cout << "*вырастает хвост и бьет им врагов*" << std::endl;
    }

void human::skill() {
       std::cout << "хочу питсы.." << std::endl;
    }
void orks::skill() {
        std::cout << "арргх..." << std:: endl;
    }
void elves::skill() {
          std::cout << "*стреляет из лука*"  << std::endl;
    }
void khadjits::skill() {
        std::cout << "мяу..." << std::endl;
    }
void dworves::skills() {
       std::cout << "*чинит оружие...*" << std::endl;
   }
void fairies::skill() {
        std::cout << "*бросает пыльцу*"  << std::endl;
    }
void demons::skill() {
      std::cout << "*призывает тени*" << std::endl;
  }
void vampires::skill() {
        std::cout << "*превращается в летучую мышь*" << std::endl;
    }
void undead::skill() {
    std::cout << "*лежит неподвижно...*" << std::endl;
 }
void giants::skill() {
        std::cout << "*неуязвимость к физическому урону*" << std::endl;
    }
void make_hero(race* u_player, race hero) {
    (*u_player) = hero;
}


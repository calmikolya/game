#include "head.h"
race::race(std::string name_, std::string race_name_, std::string feature_) : name(name_), race_name(race_name_), feature(feature_) {}

void argonians::skill() {
    std::cout << "*A spit of poison...*"  << std::endl;
    }

void human::skill() {
       std::cout <<"I wanna some pizza..."<< std::endl;
    }
void orks::skill() {
        std::cout << "WAAAAAAAAAAAAAAAAAAAAAAAAGH...!"<< std:: endl;
    }
void elves::skill() {
          std::cout << "*A shot a bow*"  << std::endl;
    }
void khadjits::skill() {
        std::cout << "*Meow...*" << std::endl;
    }
void dworves::skills() {
       std::cout << "*The sound of a hammer on metal*" << std::endl;
   }
void fairies::skill() {
        std::cout << "*A quiet laugh*""  << std::endl;
    }
void demons::skill() {
      std::cout << "*Summoning the Shadow...*" << std::endl;
  }
void vampires::skill() {
        std::cout << *Turns into a bat*" << std::endl;
    }
void undead::skill() {
    std::cout << "*No reaction...*" << std::endl;
 }
void giants::skill() {
        std::cout << "*Invulnerability to physical damage*" << std::endl;
    }
void make_hero(race* u_player, race hero) {
    (*u_player) = hero;
}


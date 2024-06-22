//
// Created by Matthew Bennett on 6/22/24.
//

#ifndef DNDPROJECT_V1_PLAYERS_H
#define DNDPROJECT_V1_PLAYERS_H
#include <string>

//inventory will manage weapons and shields also so these are ONLY PLAYER STATS & TRACKING
class Players {
private:
    //all classes will need these in constructor!
    int level;
    int experience;
    int health;
    int stamina;
    int mana;
    int strength;
    int dexterity;
    int intelligence;
    int charisma;
    std::string equipment[9]; //Can only have 9 equipment slots
    std::string skills[3]; //Skills will be specific to class like
    std::string spells[5];
};


#endif //DNDPROJECT_V1_PLAYERS_H

//
// Created by Matthew Bennett on 6/22/24.
//

#ifndef DNDPROJECT_V1_WARRIOR_H
#define DNDPROJECT_V1_WARRIOR_H
#include <string>
#include <iostream>


class Warrior {
private:
    // All classes will have the same private members with default values!
    std::string Name;
    int level {15};
    int experience {0};
    int health {125};
    int stamina {50};
    int mana {10};
    int strength {10};
    int dexterity {1};
    int intelligence {2};
    int charisma {2};
    std::string equipment[9] = {"empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty"};
    std::string skills[3] = {"Basic Attack", "Block", "empty"};
    std::string spells[5] = {"empty", "empty", "empty","empty", "empty"};

public:
    // Constructor
    Warrior(const std::string& playerName);

    // Getter methods to access private members
    const std::string& getName() const { return Name; }
    int getLevel() const { return level; }
    int getExperience() const { return experience; }
    int getHealth() const { return health; }
    int getStamina() const { return stamina; }
    int getMana() const { return mana; }
    int getStrength() const { return strength; }
    int getDexterity() const { return dexterity; }
    int getIntelligence() const { return intelligence; }
    int getCharisma() const { return charisma; }

    // Function to print attributes
    void getAttributes() const;

    const std::string& getEquipmentSlot(int slot) const { return equipment[slot]; }
    const std::string& getSkill(int index) const { return skills[index]; }
    const std::string& getSpell(int index) const { return spells[index]; }
};


#endif //DNDPROJECT_V1_WARRIOR_H

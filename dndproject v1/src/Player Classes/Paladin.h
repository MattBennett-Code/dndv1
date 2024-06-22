#ifndef DNDPROJECT_V1_PALADIN_H
#define DNDPROJECT_V1_PALADIN_H

#include <string>

class Paladin {
private:
    // All classes will have the same private members with default values!
    std::string Name;
    int level {15};
    int experience {0};
    int health {80};
    int stamina {50};
    int mana {60};
    int strength {3};
    int dexterity {3};
    int intelligence {5};
    int charisma {4};
    std::string equipment[9] = {"empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty"};
    std::string skills[3] = {"Basic Attack", "Block", "empty"};
    std::string spells[5] = {"empty", "empty", "empty","empty", "empty"};

public:
    // Constructor
    Paladin(const std::string& playerName);

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

    void getAttributes() const;

    const std::string& getEquipmentSlot(int slot) const { return equipment[slot]; }
    const std::string& getSkill(int index) const { return skills[index]; }
    const std::string& getSpell(int index) const { return spells[index]; }
};


#endif // DNDPROJECT_V1_PALADIN_H



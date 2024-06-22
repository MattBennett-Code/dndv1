//
// Created by Matthew Bennett on 6/22/24.
//

#include "Warrior.h"
// Constructor implementation
Warrior::Warrior(const std::string& playerName): Name(playerName) {}

// Function to print attributes
void Warrior::getAttributes() const {
    std::cout << Name << "'s Attributes:\n"
              << "Level: " << level << "\n"
              << "Experience: " << experience << "\n"
              << "Health: " << health << "\n"
              << "Stamina: " << stamina << "\n"
              << "Mana: " << mana << "\n"
              << "Strength: " << strength << "\n"
              << "Dexterity: " << dexterity << "\n"
              << "Intelligence: " << intelligence << "\n"
              << "Charisma: " << charisma << "\n" << std::endl;
}
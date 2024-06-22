//
// Created by Matthew Bennett on 6/22/24.
//

#include "Thief.h"
#include <string>
#include <iostream>

// Constructor implementation
Thief::Thief(const std::string &playerName) {}

// Function to print attributes
void Thief::getAttributes() const {
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

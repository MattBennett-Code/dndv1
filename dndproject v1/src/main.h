//
// Created by Matthew Bennett on 6/22/24.
//

#ifndef DNDPROJECT_V1_MAIN_H
#define DNDPROJECT_V1_MAIN_H
#include "Player Classes/Paladin.h"
#include "Player Classes/Thief.h"
#include "Player Classes/Warrior.h"
#include "Player Classes/Wizard.h"
#include "Game Sequences/IntroSequence.h"

// Global boolean to control the game loop
extern bool gameRunning;

// Game State struct
struct GameState {
    enum State {
        IntroSequence,
        Exit
    };
    State currentState;
};

// Declare a global game state variable
extern GameState gameState;


#endif //DNDPROJECT_V1_MAIN_H

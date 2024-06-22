cmake_minimum_required(VERSION 3.28)
project(dndproject_v1)

set(CMAKE_CXX_STANDARD 17)

add_executable(dndproject_v1 src/main.cpp
        src/main.h
        "src/Player Classes/Players.cpp"
        "src/Player Classes/Players.h"
        src/Dice.cpp
        src/Dice.h
        src/Enemies.cpp
        src/Enemies.h
        src/Combat.cpp
        src/Combat.h
        src/Inventory.cpp
        src/Inventory.h
        src/World.cpp
        src/World.h
        src/Quests.cpp
        src/Quests.h
        src/ui.cpp
        src/ui.h
        "src/Player Classes/Warrior.cpp"
        "src/Player Classes/Warrior.h"
        "src/Player Classes/Wizard.cpp"
        "src/Player Classes/Wizard.h"
        "src/Player Classes/Thief.cpp"
        "src/Player Classes/Thief.h"
        "src/Player Classes/Paladin.cpp"
        "src/Player Classes/Paladin.h"
        "src/Game Sequences/IntroSequence.cpp"
        "src/Game Sequences/IntroSequence.h")

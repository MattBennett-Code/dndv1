#include <iostream>
#include "IntroSequence.h" // Include the corresponding header file
#include "../main.h"
#include <string>
#include <iomanip>


// Define the function to handle the intro sequence logic
void runIntroSequence() {
    int terminalWidth = 150;

    std::string text1 = "Your journey begins here...\n";
    std::string text2 = "you awaken in the dirt outside the castle.\n";

    std::string castle[] = {
            "   /\\                                                        /\\",
            "  |  |                                                      |  |",
            " /----\\                  Lord Dark's Keep                  /----\\",
            "[______]             Where Brave Knights Tremble          [______]",
            " |    |         _____                        _____         |    |",
            " |[]  |        [     ]                      [     ]        |  []|",
            " |    |       [_______][ ][ ][ ][][ ][ ][ ][_______]       |    |",
            " |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    |",
            " |             |     |/'    ____..____    '\\|     |             |",
            "  \\  []        |     |    /'    ||    '\\    |     |        []  /",
            "   |      []   |     |   |o     ||     o|   |     |  []       |",
            "   |           |  _  |   |     _||_     |   |  _  |           |",
            "   |   []      | (_) |   |    (_||_)    |   | (_) |       []  |",
            "   |           |     |   |     (||)     |   |     |           |",
            "   |           |     |   |      ||      |   |     |           |",
            " /''           |     |   |o     ||     o|   |     |           ''\\",
            "[_____________[_______]--'------''------'--[_______]_____________]"
    };

    std::cout << std::setw((terminalWidth + text1.length()) / 2) << text1;
    std::cout << std::setw((terminalWidth + text2.length()) / 2) << text2;

    for (const std::string &line : castle) {
        std::cout << std::setw((terminalWidth + line.length()) / 2) << line << std::endl;
    }


    gameState.currentState = GameState::Exit; //updates state to exit game
}

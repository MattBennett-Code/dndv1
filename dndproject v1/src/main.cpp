#include <iostream>
#include "main.h"
#include "Game Sequences/IntroSequence.h"

bool gameRunning = true;
GameState gameState = {GameState::IntroSequence};

int main() {
    while (gameRunning) {
        switch (gameState.currentState) {
            case GameState::IntroSequence:
                runIntroSequence();
                break;

            case GameState::Exit:
                gameRunning = false; // Set gameRunning to false to exit the loop
                break;
        }
    }
    std::cout << "Game has exited.\n";
    return 0;
}

//
// Created by Matthew Bennett on 6/22/24.
//

#ifndef DNDPROJECT_V1_DICE_H
#define DNDPROJECT_V1_DICE_H
#include <cstdlib> // For rand and srand
#include <ctime>   // For time

class Dice {
private:
    int sides; //Number of sides on the die

public:
    //constructor for sides of the dice
    Dice(int numSides) : sides(numSides){
        srand(time(nullptr)); //seeding the random number generator so it is different every time
    }

    int roll(){
        return rand() % sides + 1;
    }

};


#endif //DNDPROJECT_V1_DICE_H

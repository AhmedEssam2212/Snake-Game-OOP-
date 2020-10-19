#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>//to include the kbhit function
#include <stdlib.h>
#include <windows.h>
#include "OPP.h"
#include "OPP.cpp"
#include "snakeMovementClass.h"
#include "snakeMovementClass.cpp"


using namespace std;

int main()
{ //Making Objects
    drawing draw;
    Directions bound;

//Calling methods
    draw.generateFruit();
    bound.startGame();
    while(1){
     draw.boundaries();
     bound.takeDirections();
     bound.movement(/*Directions*,drawing**/ int &);
     }


    return 0;
}


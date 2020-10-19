#ifndef SNAKEMOVEMENTCLASS_H_INCLUDED
#define SNAKEMOVEMENTCLASS_H_INCLUDED

#include <iostream>
#include <ctime>
#include <string>

#include "OPP.h"//To apply Inheritance
using namespace std;

class Directions:public drawing
{
  public:
    enum directions{ STOP =0,UP,RIGHT,LEFT,DOWN};
    directions directTo;
    //setter and getter to each one

    Directions();//Constructor
    Directions(int score,int legnthOfTail,int xHead,int yHead);

    //Main Methods
    void takeDirections();
    void movement(int &);//Directions*,drawing*);
    void startGame();

  private:
    int score;
    int lengthOfTail;
     bool gameOver;
   // drawing draw;
    //int xTail[100];
    //int yTail[100];
};

#endif // SNAKEMOVEMENTCLASS_H_INCLUDED

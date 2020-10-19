#include "snakeMovementClass.h"
#include <conio.h>//to include the kbhit function
#include <windows.h>

//default
Directions::Directions(){
  score=0;
  lengthOfTail=0;
}
//Parametrized
Directions::Directions(int score,int lengthOfTail,int xHead,int yHead):drawing(xHead,yHead,xFruit,yFruit){
  score=0;
  lengthOfTail=0;
}
void Directions::startGame(){
gameOver=false;
}
void Directions::takeDirections(){
 cout<<"This is a class";

if(_kbhit()){
        switch(_getch()){

            case 72:
                directTo =UP;
                break;
            case 80:
                directTo =DOWN;
                break;
            case 77:
                directTo =RIGHT;
                break;
            case 75:
                directTo =LEFT;
                break;
            case 27://if the user presses escape button
               gameOver=true;
               Beep(500,300);
               exit(0);
                break;
            default:
                break;
        }


}}

void Directions ::movement(int &){
 drawing draw;

  switch(directTo){
  case UP:
     // a->yHead=yHead--;
    //  yHead --;
    &yHead --;
      break;
  case DOWN:
      yHead ++;
       break;
  case LEFT:
      xHead--;
      break;
  case RIGHT :
     xHead ++;
    break;
 default :
    break;

}
//Generate fruit when it is eaten
//The Snake speed increase by increasing the score
if(xHead ==xFruit && yHead==yFruit){
    score +=10;
    //cout<<score;
    drawing draw;
    draw.generateFruit();
   lengthOfTail++;
   if(score==10){
    Sleep(1000);
   }
   else if(score ==30){
    Sleep(400);
   }
   else if(score==40){
    Sleep(300);
   }
   else if (score==100){
    Sleep(100);
   }
   else if(score==150){
        Sleep(30);

   }

 }


}




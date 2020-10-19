#include "OPP.h"
#include <ctime>

//The Drawing Class
//------------------------------------------------------------------------------------------------------------------------------
//constructors

//default
drawing::drawing(){
   rectangleHeight=30;
   rectangleWidth=20;
   xHead=rectangleHeight/3;
   yHead=rectangleWidth/3; //as it will be its default value;
}
//parametrized
drawing::drawing(int xHead,int yHead,int xFruit,int yFruit){
  xHead=rectangleHeight/3;
  yHead=rectangleWidth/3;
}
void drawing::setBounds(int height,int width){

   rectangleHeight=height;
   rectangleWidth=width;}
int drawing ::getHeight(){
  return rectangleHeight;}
int drawing ::getWidth(){
  return rectangleWidth;}


void drawing :: setFruit(int x ,int y){
   xFruit=x;
   yFruit=y;
}
int drawing::getxFruit(){
  return xFruit;}
int drawing::getyFruit(){
  return yFruit;}


void drawing::setxHead(int x){
xHead=x;}
void drawing::setyHead(int y){
yHead=y;}
int drawing::getxHead(){
  return xHead;}
  int drawing::getyHead(){
  return yHead;}



void drawing ::generateFruit(){
   srand(time(NULL));
   xFruit= rand()% (rectangleWidth -2) +1;//from 1 to height -2 as the wall itself is not a position for the fruit
   yFruit =rand() % (rectangleHeight -2)+1;

}


void drawing :: boundaries(){
  system("cls");
  cout<<"Welcome To Snake Game !!"<<endl<<endl;
   int i,j;

  setBounds(20,30);

for(i=0;i<rectangleHeight;i++){
    for(j=0;j<rectangleWidth;j++){
        if (j==0 || j==rectangleWidth-1){
            cout<<"#";}

        else if(i==0 || i==rectangleHeight-1){
            cout<<"#";}
        else if(i == yFruit && j == xFruit){
            cout<<"$";
        }
          else if(i== yHead && j == xHead){
            cout<<"0";}
        else {
            cout<<" ";
        }

    }
    cout <<endl;
    }


}

//------------------------------------------------------------------------------------------------------------------------------

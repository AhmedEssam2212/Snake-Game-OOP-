#ifndef OPP_H_INCLUDED
#define OPP_H_INCLUDED
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//The Drawing Class includes the boundaries & generate Fruit Functions
class drawing
{
 public:
     enum directions{ STOP =0,UP,RIGHT,LEFT,DOWN};
    directions directTo;
     //setter and getter for each attribute

     void setBounds(int height,int width);
     void setFruit(int x ,int y);
     void setxHead(int x);
     void setyHead(int y);
     int getxFruit();
     int getyFruit();
     int getyHead();
     int getxHead();
     int getHeight();
     int getWidth();

     //Main Methods
     void boundaries();
     void generateFruit();

     drawing();//default constructor
     drawing(int xHead,int yHead,int xFruit,int yFruit);

  public :
   int rectangleWidth ;//y-axis
   int rectangleHeight;//x-axis
   int xFruit;
   int yFruit;
   int xHead;
   int yHead;
};

//------------------------------------------------------------------------------------------------------------------------------




#endif // OPP_H_INCLUDED

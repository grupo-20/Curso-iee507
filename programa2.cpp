#include<iostream>
using namespace std;
class Box {
public:
double length;// Length of a box
double breadth;// Breeadth of a box
double  height; // height of a box
};
int main() {
Box Box1; // declare box1 of type box
Box Box2;// declare box2 of type box

double  volume = 0.0;  //store the volume of a box here 

//box 1 specification
Box1.height = 5.0;
Box1.length = 6.0;
Box1.breadth = 7.0;

// box 2 specification 
Box2.height = 10.0;
Box2.length = 12.0;
Box2.breadth = 13.0;

// volume of box 1
volume = Box1.height * Box1. length * Box1. breadth;
cout << "volume of Box1: " << volume << endl;

// volume of box 2
volume  = Box2.height * Box2. length * Box2. breadth;
cout << "volume of Box2: " << volume << endl;

return 0;
}


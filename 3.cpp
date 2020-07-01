//Muhammad Ibad Saleem 19K-0220 Lab Task 3


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class ShapeArea{
    protected:                  //Base Class
    float Area;
    float length;
    float breadth;
    public:
    
    ShapeArea(){}
    
    ShapeArea(float a, float b)
    {
        length=a;
        breadth=b;
    }
};

class AreaSh: public ShapeArea{             //Derived Class
    
    public:
    void AreaB(float a, float b)                                //Same name function two parameter
    {
        Area= a*b;
        cout<<"Area of Rectangle: "<<Area<<endl;
    }
    void AreaB(float a)                         //same namefunction single parameter
    {
        Area=a*a;
        cout<<"Area of Square: "<<Area<<endl;
    }

};

int main()
{
    system("cls");
    AreaSh A1;
    A1.AreaB(7,4);                  //area of rectangle
    A1.AreaB(7);                    //area of square
    
}
//Muhammad Ibad Saleem 19K-0220 Lab Task 2  

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Rectangle
{
    protected:          //protected so that easily useable by derived class

    float length;
    float breadth;
    float Area;
    
    public:
    // Rectangle(){}
    // Rectangle(float a, float b)
    // {
    //         length=a;
    //         breadth=b;
    // }

    void CalArea(float l,float b)           //Original Function
    {
        cout<<"Orginal Function ";
        Area=l*b;
        cout<<"Area: "<<Area;
    }

};

class RectangleArea:public Rectangle
{
    public:
    
    void CalArea(float a, float b)              //over riden function
    {
        cout<<"\n\nOverrided Function ";
        Area=a*b;
        cout<<"Area:"<<Area<<endl;
    }

};

int main()
{
    system("cls");
    RectangleArea R1;                       //Object of over ridden function
    R1.CalArea(4.2,4.3);

}

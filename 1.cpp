//Muhammad Ibad Saleem Task 1 19K-0220 Lab 8

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


class Message{
    string msg;             //private member 
    public:
    Message(string a)               //Constructor
    {
        msg=a;
    }

    void print()                        //member function with no arguments
    {
        cout<<msg<<endl<<endl<<endl;
    }

    void print(string input)            //member function with string argument
    {
        cout<<msg<<" "<<input<<endl;
    }
};

int main()
{
    system("cls");
    Message M1("Hello My Name Is?");
    M1.print();                           //only the string that is stored.
    M1.print("\nMy name is Ibad");          //string stored with addition to string passed.
    getch();
}


//Muhammad Ibad Saleem 19K-0220 Lab Task 4 


#include <iostream>
using namespace std;
 
class Bank{
    public:
    int getBalance()
    {
        return 0;
    }

};

class BankA:virtual public Bank{
    int amount;                         // amount declared however amount can be returned too
                                                //Virtual Derived Class Bank-A

    public:         
    BankA(){}
    BankA(int a)
    {
        amount=a;
    }

    int getBalance()
    {
        return amount;
    }
}; 

class BankB:virtual public Bank{            //Virtual Derived Class Bank-B
    int amount;
    public:
    BankB(){}
    BankB(int a)
    {
        amount=a;
    }

    int getBalance()
    {
        return amount;
    }
};

class BankC:virtual public Bank{                //Virtual Derived Class Bank-C
    int amount;
    public:
    BankC(){}
    BankC(int a)
    {
        amount=a;
    }

    int getBalance()
    {
        return amount;
    }
};

int main()
{
    system("cls");
    BankA BA(1000);                     //Objects Bank A, B, C
    BankB BB(1500);
    BankC BC(2000);

    cout<<"Bank A deposited amount: $"<<BA.getBalance()<<endl;
    cout<<"Bank B deposited amount: $"<<BB.getBalance()<<endl;          //Outputs
    cout<<"Bank C deposited amount: $"<<BC.getBalance()<<endl;
}
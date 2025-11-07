#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;

       void fun()
       {
          cout << "Inside base fun \n";
       }
        void gun()
       {
          cout << "Inside base gun \n";
       }
        void sun()
       {
          cout << "Inside base sun \n";
       }
        void bun()
       {
          cout << "Inside base bun \n";
       }

};

class Derived :public Base
{
    public:
       int x;

        void gun()
        {
          cout << "Inside Derived gun \n";
        }
        void sun()
        {
          cout << "Inside Derived sun \n";
        }
        void run()
        {
          cout << "Inside Derived run \n";
        }
        void mun()
        {
          cout << "Inside Derived mun \n";
        }

};

int main()
{
    Base *bp1 = new Base();    //NoCasting
    Derived *dp1 = new Derived();   //Nocasting
    Base *bp2 = new Derived();    //Upcasting
    Derived *dp2 = new Base();     //Downcasting   ERROR
    return 0;
}
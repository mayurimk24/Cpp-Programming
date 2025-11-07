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
       virtual void sun()
       {
          cout << "Inside base sun \n";
       }
       virtual void bun()
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
   cout <<sizeof(Base) << endl;   //116
   cout <<sizeof(Derived) << endl;   //20

    Base *bp = new Derived();    //Upcasting

   /* bp -> fun();     //Base fun
    bp -> gun();     //Base gun
    bp -> sun();     // Base sun
   //  bp -> run();     //Error
   //  bp -> mun();     //Error
    bp -> bun();     //Base bun
    */


    return 0;
}
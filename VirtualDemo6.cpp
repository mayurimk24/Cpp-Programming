#include<iostream>
using namespace std;

class Base 
{
    public:
       int i;
       float f;
       void fun()   //1000
       {
        cout << "Base fun";
       }
       virtual void gun()   //2000
       {
        cout << "Base gun";
       }
};

class Derived :public Base
{
    public:
       int i;
       double d;
        virtual void fun()      //3000
        {
          cout <<"Derived fun";
        }
        void gun()     //4000
        {
          cout << "Derived gun";
        }

        virtual void sun()    //5000
        {
          cout << "Derived sun";
        }
};

int main()
{
    Base *bp = new Derived;

    bp -> gun();
    
    return 0;
}

#include<iostream>
using namespace std;

class Base   //12
{
    public:
        int i;

    private:
         int j;

    protected:
         int k;

    public:
       
       Base()
       {
           i=10;
           j=20;
           k=30;
       }
        void fun()
        {
            cout<<i<<"\n";      //Allowed
            cout<<j<<"\n";      //Allowed
            cout<<k<<"\n";      //Allowed
        }

       
};

class Derived : public Base{ //16
      public:
        int x;
        void display()
        {
            cout<<i<<"\n";       //Allowed
            cout<<j<<"\n";       //Error
            cout<<k<<"\n";        //Allowed
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<endl;       //Allowed
    cout<<bobj.j<<endl;       //Error
    cout<<bobj.k<<endl;       //Error

    cout<<dobj.i<<endl;       //Allowed
    cout<<dobj.j<<endl;       //Error
    cout<<dobj.k<<endl;        //Error
    
    dobj.fun();      //Allowed
    dobj.display();    //Allowed

    return 0;
}
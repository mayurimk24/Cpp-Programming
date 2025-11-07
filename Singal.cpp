#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        void fun()
        {
            cout<<"Inside base fun"<<endl;
        }

};

class Derived : public Base{
    public:
      int x;

      void gun(){

        cout <<"Inside derived gun"<<"\n";
      }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"size of base class object: "<<sizeof(bobj)<<endl;
    cout<<"size of Derived class object: "<<sizeof(dobj)<<endl;
    return 0;
}
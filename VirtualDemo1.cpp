#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;

};

class Derived :public Base
{
    public:
       int x;

};

int main()
{
    cout << sizeof(Base) << endl;    //8
    cout << sizeof(Derived) << endl;     //12
    return 0;
}
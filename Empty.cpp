#include<iostream>
using namespace std;

class Demo
{ 
    public :
        void Display()
        {
            cout << "Inside a display \n";
        }

};

int main()
{
    Demo dobj;

    cout << sizeof(dobj);
    return 0;
}
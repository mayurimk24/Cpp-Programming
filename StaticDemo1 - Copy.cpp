#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        static int x;

        Demo(){
            this -> i = 0;
            this -> j = 0;
        }

        Demo(int a, int b){
            this -> i = a; 
            this -> j = b;
        }
        
        void Fun()
        {
            cout << "Inside Fun" <<endl;
        }

        static void Gun()
        {
            cout << "inside Gun" << endl;
        }
};

int Demo :: x = 11;

int main()
{
    Demo :: Gun();  // :: Scop Resolution operator
    cout << "Value of x is :" << Demo :: x << endl;
    
    return 0;
}
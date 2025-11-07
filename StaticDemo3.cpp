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
            cout << "Value of i is : "<<this -> i << endl;
            cout << "Value of j is : "<<this -> j << endl;
            cout << "value of x is : "<< x << endl;
        }

        static void Gun()
        {
            cout << "inside Gun" << endl;
           // cout << i << endl;     NA
           // cout << j << endl;     NA
            cout << x << endl;
        }
};

int Demo :: x = 11;

int main()
{
    Demo :: Gun();  // :: Scop Resolution operator
    cout << "Value of x is :" << Demo :: x << endl;
    
    Demo obj(10,20);
    obj.Fun();

    obj.Gun();
    
    cout << "Size of obj is : " << sizeof(obj) << endl;
    return 0;
}
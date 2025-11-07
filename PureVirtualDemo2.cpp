#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;

       int Addition(int A, int B)    //Concrete
       {
         return A+B;
       }
       virtual int Substraction(int A, int B) = 0;   //Abstract 
};

class Derived :public Base
{
    public:
       int x;
      virtual int Substraction(int A, int B)    //Concrete
      {
        return A-B;
      }
     int Multiplication(int A, int B)    //Concrete
      {
        return A*B;
      }

};

int main()
{
    Base *bp = new Derived();    //Upcasting
    int iRet = 0;

    iRet = bp -> Addition(11,10);    //21
    cout << iRet << endl;
    iRet = bp -> Substraction(11,10);   //1
    cout << iRet << endl;
    // iRet = bp -> Multiplication(11,10);   //Error
    
    return 0;
}
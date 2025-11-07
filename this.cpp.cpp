#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int iNo1, iNo2;

        Arithematic()
        {
            //cout<< "Inside default constructor"<<endl;
            this->iNo1 = 0;
           this-> iNo2 = 0;
        }

        Arithematic(int A, int B)
        {
           // cout<< "Inside Parameterized constructor"<<endl;
           this-> iNo1 = A;
           this-> iNo2 = B;
        }

        int Addition()
        {
            int iANS = 0;
            iANS = this-> iNo1 +this-> iNo2;
            return iANS;
        }

        int Substraction()
        {
            int iANS = 0;
            iANS = this->iNo1 -this-> iNo2;
            return iANS;
        }
};

int main()
{ 
    Arithematic aobj1(11,10);
    Arithematic aobj2(21,20);

    int iRet = 0;

    iRet = aobj1.Addition();
    cout <<"Addition is: "<<iRet<<endl;

    iRet = aobj1.Substraction();
    cout <<"Substraction is: "<<iRet<<endl;

    iRet = aobj2.Addition();
    cout <<"Addition is: "<<iRet<<endl;

    iRet = aobj2.Substraction();
    cout <<"Substraction is: "<<iRet<<endl;

    return 0;
}
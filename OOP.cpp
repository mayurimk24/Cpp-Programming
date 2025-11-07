#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int iNo1, iNo2;

        Arithematic()
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithematic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iANS = 0;
            iANS = iNo1 + iNo2;
            return iANS;
        }

        int Substraction()
        {
            int iANS = 0;
            iANS = iNo1 - iNo2;
            return iANS;
        }
};

int main()
{ 
    Arithematic aobj1(11,10);
    int iRet = 0;

    iRet = aobj1.Addition();
    cout <<"Addition is: "<<iRet<<endl;

    iRet = aobj1.Substraction();
    cout <<"Substraction is: "<<iRet<<endl;

    return 0;
}
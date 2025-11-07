#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
     int iANs = 0;
     iANs = iNo1 + iNo2;
     return iANs; 
}

int Substraction(int iNo1, int iNo2)
{
     int iANs = 0;
     iANs = iNo1 - iNo2;
     return iANs; 
}

int main()
{
    int iRet = 0 ;
    iRet = Addition(11,10);
    printf("Addition is :%d\n",iRet);

    iRet = Substraction(11,10);
    printf("Subtraction is :%d\n",iRet);


    return 0;
}
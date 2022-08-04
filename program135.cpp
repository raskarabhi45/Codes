//factorial in c++
//4
//4*3*2*1=24
//1*2*3*4=24
#include<iostream>
using namespace std;

class Number
{
    public:
int Factorial(int iNo)
{  
    int iFact=1;
    for(int i=1;i<=iNo;i++)
    {
        iFact=iFact*i;       //iFact*=i;(shorthand assignment operator)
    }
    return iFact;

}
};


int main()
{
    Number nobj;
    int iValue=0;
    int iRet=0;

   cout<<"Enter number"<<endl;
   cin>>iValue;

    iRet=nobj.Factorial(iValue);
    cout<<"factorial is:"<<iRet<<endl;
    return 0;
}
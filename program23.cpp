#include<iostream>
using namespace std;

bool CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    cout<<"Enter number\n";
    cin>>iValue;
    
    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        cout<<iValue<<" is even\n";
    }
    else{
        cout<<iValue<<" is odd\n";
    }

    return 0;
}
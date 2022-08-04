#include<iostream>
using namespace std;

   
    int sum(int iNo)
    {
    int isum=0,iCnt=0;

    if(iNo<0)
        {
            iNo=-iNo;
        }
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        isum=isum+iCnt;
    }
     return isum;
    }

int main()
{
    {
        int iValue=0,iRet=0;
        cout<<"Enter number\n";
        cin>>iValue;
    
       iRet=sum(iValue);
       cout<<"Sum is  :"<<iRet;
    
        return 0;
    }
}



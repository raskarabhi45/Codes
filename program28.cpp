#include<iostream>
using namespace std;

void DisplayFactors(int iNo) //shop
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
    if(iNo%iCnt==0)
    {
    cout<<iCnt;
    }
    
}
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    DisplayFactors(iValue); //home

    return 0;
}
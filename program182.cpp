//program to swap two numbers in specific programming
//Call by Reference

#include<iostream>
using namespace std;

void SwapR(int &p,int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}

int main()
{
    int No1=11,No2=21;

     cout<<"Before swap data is :"<<No1<<" and "<<No2<<endl;

    SwapR(No1,No2);

    cout<<"After swap data is :"<<No1<<" and "<<No2;



    return 0;
}
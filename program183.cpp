//program to swap two numbers in generic programming
//Call by Reference

#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p,T &q)
{
    T temp;
    temp=p;
    p=q;
    q=temp;
}

int main()
{
    int No1=11,No2=21;
    cout<<"Before swap data is :"<<No1<<" and "<<No2<<endl;
    SwapR(No1,No2);
    cout<<"After swap data is :"<<No1<<" and "<<No2<<endl;;

    float no1=11.11,no2=21.21;
    cout<<"Before swap data is :"<<no1<<" and "<<no2<<endl;
    SwapR(no1,no2);
    cout<<"After swap data is :"<<no1<<" and "<<no2<<endl;

    char ch1='A',ch2='B';
    cout<<"Before swap data is :"<<ch1<<" and "<<ch2<<endl;
    SwapR(ch1,ch2);
    cout<<"After swap data is :"<<ch1<<" and "<<ch2<<endl;

    return 0;
}
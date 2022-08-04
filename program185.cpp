//Addition of two values in generic
/*
Addition is 32
Addition is 32.32
*/
#include<iostream>
using namespace std;

template<class T>
T Addition(T A,T B)
{
    T Ans;
    Ans=A+B;
    return Ans;
}

int main()
{
   int no1=11,no2=21;
   int ret=Addition(no1,no2);
   cout<<"Addition is "<<ret<<endl;

   float fno1=11.11,fno2=21.21;
   float fret=Addition(fno1,fno2);
   cout<<"Addition is "<<fret<<endl;


   return 0;
}
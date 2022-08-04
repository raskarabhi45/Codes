//factorial in c++ best code
//4
//4*3*2*1=24
//1*2*3*4=24
#include<iostream>
using namespace std;

class Number
{
    private:
    int iNo;    //characteristic

    public:
    //behaviours
    void Accept()   //setter method
    {
        cout<<"Enter the value:"<<endl;
        cin>>this->iNo;
    }

    void Display()   //getter method
    {
        cout<<"Value is :"<<this->iNo<<endl;
    }

    int Factorial()
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
    int iRet=0;
    
    //cout<<nobj.iNo;  private 
    nobj.Accept();
    nobj.Display();

    iRet=nobj.Factorial();
    cout<<"factorial is:"<<iRet<<endl;
    return 0;
}
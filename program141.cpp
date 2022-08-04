//to accept n number s
#include<stdio.h>
using namespace std;

class ArrayX
{
    private:
    int *Arr;
    int iSize;

    public:
    ArrayX(int iValue)
    {
        this->iSize=iValue;
        Arr=new int[iSize];
    }
    ~ArrayX()
    {
        delete []Arr;
    }

    void Accept()
    {
        int i=0;
        cout<<"Enter the elements of the array\n";

        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"El;ements of the array are";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i];
        }
    }
};

int main()

{
    
}

//in oop
#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int size;

    ArrayX(int value)
    {
        size=value;
        Arr=new int[size]; //to allocate resource
    }

    ~ArrayX()
    {
        delete []Arr;     //to deallocate resource in the destructor
    }

    void Accept()      //setter method
    {
        cout<<"Enter the values"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()    //getter method
    {
        cout<<"Values are :"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
};

int main()
{
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    return 0;
}
//Specific code of max element in oop
#include<iostream>
using namespace std;

class ArrayX
{
    private:
    int *Arr;
    int size;

    public:
    ArrayX(int value);
    ~ArrayX();
    void Accept();
    void Display();
    int Maximum();
};

     ArrayX::ArrayX(int value)
    {
        size=value;
        Arr=new int[size];
    }

     ArrayX::~ArrayX()
    {
        delete []Arr;
    } 

     void ArrayX:: Accept()
    {
        cout<<"Enter the values"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }

    void ArrayX:: Display()
    {
        cout<<"Values are :"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    int ArrayX:: Maximum()
    {
        int max=Arr[0];
        for(int i=0;i<size;i++)
        {
            if(Arr[i]>max)
            {
                max=Arr[i];
            }
        }
        return max;
    }

int main()
{
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    int ret=obj1.Maximum();
    cout<<"Maximum element is : "<<ret<<endl;

    return 0;
}
//addition of n numbers in oop
#include<iostream>
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
        Arr=new int[iSize];  //resource

    }
    ~ArrayX()             //destructor
    {
        delete []Arr;   //Deallocate the resource
    }

    void Accept()  //void Accept(ArrayX *this)
    {
        int i=0;
        cout<<"Enter the elements od array"<<endl;
        
   for(int i=0;i<iSize;i++)
     {
       cin>>Arr[i];
     }
    }

    void Display()
    {
        cout<<"Elements of the array are"<<endl;
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

 //Add function here with logic
};

int main()
{
    int iRet=0;

    ArrayX obj1(5);

    obj1.Accept();  //Accpet(&obj)
    obj1.Display();

    iRet=obj1.__________()


    return 0;
}
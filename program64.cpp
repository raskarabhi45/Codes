//Array call by Address
#include<iostream>
using namespace std;

class Array
{
    public:

    void Display(int Arr[])
    {
    int i=0;
    cout<<"Elements of the array are:"<<endl;

    for(i=0;i<5;i++)
    {
        cout<<(Arr[i])<<endl;
    }

    }
};


int main()
{
    int Arr[5];
    int  i=0;

    Array obj;

    cout<<"ENter elements\n";
    for(i=0;i<5;i++)
    {
        cin>>Arr[i];
    }

    obj.Display(Arr);

    return 0;
}
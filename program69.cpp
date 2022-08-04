//to display even numbers in array
#include<iostream>
using namespace std;

void DisplayEven(int Arr[],int ilength)
{
    cout<<"Even elements are:"<<endl;
    for(int i=0;i<ilength;i++)
    {
        if(Arr[i]%2==0)
        {
            cout<<Arr[i]<<endl;
        }
    }

}

int main()
{
    int *ptr=NULL;
    int isize=0;

    cout<<"ENter the number of elements"<<endl;
    cin>>isize;

    ptr=new int(isize);  //ptr=(int*)malloc(sizeof(int)*isize);

    cout<<"Entrr the values of array\n";
    for(int i=0;i<isize;i++)
    {
        cin>>ptr[i];
    }

    DisplayEven(ptr,isize);
    delete ptr;

    return 0;
}
//To get maximum number from array
#include<iostream>
using namespace std;

template<class T>
T Max(T Arr[],int size)
{
    T max=Arr[0];
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
    int Arr[]={10,90,30,40,80};
    int ret=Max(Arr,5);
    cout<<"Maximum element is :"<<ret<<endl;

    float Brr[]={10.34,20.43,300.45,40.44,80.90};
    float fret=Max(Brr,5);
    cout<<"Maximum element is :"<<fret<<endl;

    return 0;
}
//Accpet n numbers and display
/* output
10
20
30
40
50
A
B
C
D
E
10.11
20.22
30.33
40.44
50.55
*/
#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    int Arr[]={10,20,30,40,50};
    Display(Arr,5);

    char Brr[]={'A','B','C','D','E'};
    Display(Brr,5);

    float Crr[]={10.11,20.22,30.33,40.44,50.55};
    Display(Crr,5);

    return 0;
}
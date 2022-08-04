//Problems on String.........Very important topic
//using while loop
#include<iostream>
using namespace std;

int main()
{
    char Arr[]="Hello";
    int i=0;

    cout<<Arr;

    while(Arr[i]!='\0')
    {
        cout<<Arr[i]<<endl;
        i++;
    }
    

    return 0;
}
//Accpet String from user
//count occurance of letter l
/*
Enter String
hello world
String contains l 3 times
*/


#include<iostream>
using namespace std;

int StrlenX(char str[])
{
    int cnt=0;
     while(*str !='\0')
    {
        if(*str=='l')
        {
        cnt++;
        }
        str++;
    }
    return cnt;

}

int main()
{
    char Arr[20];
    int ret=0;
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //getline method

    ret=StrlenX(Arr);
    cout<<"String contains l "<<ret<<" times"<<endl;

    return 0;
}


//Accpet String from user
//find out the length of the string
/*
Enter String
Jay Ganesh
String length is 10
*/


#include<iostream>
using namespace std;

int StrlenX(char str[]) //Strlen()  ....inbuilt
{
    int cnt=0;
     while(*str !='\0')
    {
        cnt++;
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
    cout<<"String length is "<<ret<<endl;

    return 0;
}


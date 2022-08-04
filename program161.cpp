//Copy the string
/*
 Enter String
abhi
String afer copy abhi
*/


#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
    while(*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';    //very important to add '\0' at end of Brr
   
}

int main()
{
    char Arr[50];   //full Notebook
    char Brr[50];   //empty Notebook

    cout<<"Enter String"<<endl;
    cin.getline(Arr,50);           //getline method

    strcpyX(Arr,Brr);
    cout<<"String after copy "<<Brr<<endl;

    return 0;
}


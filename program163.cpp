//to concatenate 2 string
/*
Enter 1st String
Abhishek
Enter 2nd string
Raskar
String afer concatenation AbhishekRaskar
*/


#include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
    while(*src!='\0')
    {
        src++;
    }

    while(*dest!='\0')
    {
        *src=*dest;
        src++;
        dest++;
    }
    *dest='\0';    //very important to add '\0' at end of Brr
   
}

int main()
{
    char Arr[50];   //full Notebook
    char Brr[50];   //empty Notebook

    cout<<"Enter 1st String"<<endl;
    cin.getline(Arr,50);           //getline method

    cout<<"Enter 2nd string"<<endl;
    cin.getline(Brr,50);

    strcatX(Arr,Brr);
    cout<<"String afer concatenation"<<Arr<<endl;

    return 0;
}


//to compare 2 string  length ,data,case same
/*
Enter 1st String
abcd
Enter 2nd string
abcd
Strings are equal
*/

#include<iostream>
using namespace std;

bool strcmpX(char *src,char *dest)
{
    while((*src!='\0')&&(*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
    }

    if(*src=='\0'&& *dest=='\0')
    {
        return true;
    }
    else
    {
        return false;
    } 
       
}

int main()
{
    char Arr[50];   
    char Brr[50];   
    bool ret;

    cout<<"Enter 1st String"<<endl;
    cin.getline(Arr,50);           

    cout<<"Enter 2nd string"<<endl;
    cin.getline(Brr,50);

    ret=strcmpX(Arr,Brr);

    if(ret==true)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }

    return 0;
}


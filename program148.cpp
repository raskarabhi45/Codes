//Taking String from user
//With regular expression //regex

#include<iostream>
using namespace std;

void Display(char str[])
{
     while(*str !='\0')
    {
        cout<<*str<<endl;
        str++;
    }

}

int main()
{
    char Arr[20];
    cout<<"Enter String"<<endl;
    scanf("%[^'\n]s",Arr);  //run until new line scanf("%[^'\n]s")

//scanf("%[^'\n]s")
    Display(Arr);

    return 0;
}
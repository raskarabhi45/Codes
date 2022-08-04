//factorial best code in oop

#include<iostream>
using namespace std;

class Number
{
    private:
    int no;

    public:

    void Accept()
    {
        cout<<"Enter number\n";
        cin>>this->no;
    }

    void Display()
    {
        cout<<"Value is :"<<this->no;
    }

    int Factorial()
    {
        int fact=1;

        for(int i=1;i<=no;i++)
        {
            fact=fact*i;
        }
        return fact;
    }

};

int main()
{
    Number obj;
    int ret=0;

    obj.Accept();
    obj.Display();

    ret=obj.Factorial();
    cout<<"Factorial is : "<<ret;

    return 0;
}

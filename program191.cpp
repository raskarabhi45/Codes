//Generic code of max element in oop
#include<iostream>
using namespace std;

template<class T>
class ArrayX               //Generic class
{
    private:
    T *Arr;
    int size;

    public:
    ArrayX(int value);
    ~ArrayX();
    void Accept();
    void Display();
    T Maximum();
};

     template<class T>
     ArrayX<T>::ArrayX(int value)
    {
        size=value;
        Arr=new T[size];
    }

     template<class T>
     ArrayX<T>::~ArrayX()
    {
        delete []Arr;
    } 
     
     template<class T>
     void ArrayX<T>:: Accept()
    {
        cout<<"Enter the values"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }

    template<class T>
    void ArrayX<T>:: Display()
    {
        cout<<"Values are :"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    template<class T>
    T ArrayX<T>:: Maximum()
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
    ArrayX <int>obj1(5);    //<int>      
    obj1.Accept();
    obj1.Display();

    int ret=obj1.Maximum();
    cout<<"Maximum element is : "<<ret<<endl;

     ArrayX <char>obj2(5);    //<int>      
    obj2.Accept();
    obj2.Display();

    char cret=obj2.Maximum();
    cout<<"Maximum element is : "<<cret<<endl;

    return 0;
}
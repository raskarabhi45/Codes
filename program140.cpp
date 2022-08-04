//template for pattern printing 

#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRow,iCol;

    public:
    Pattern(int a,int b)
    {
        this->iRow=a;
        this->iCol=b;
    }

    void Display()
    {
        //Logic
    }

};
  int main()
  {
      Pattern obj(_,_);
       obj.DisplayPattern();
      return 0;
  }
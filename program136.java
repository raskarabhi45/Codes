import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        this.iNo=sobj.nextInt();

    }

    public void Display()
    {
        System.out.println("Value is:"+this.iNo);

    }

    public int Factorial()
    {
        int iFact=1;
     for(int i=1;i<=iNo;i++)
    {
        iFact=iFact*i;       //iFact*=i;(shorthand assignment operator)
    }
     return iFact;

    }
}

class program136
{
    public static void main(String arg[])
    {
        Number nobj=new Number();
        int iRet=0;

        nobj.Accept();
        nobj.Display();;

        iRet=nobj.Factorial();
        System.out.println("factorial is:"+iRet);
    }
}
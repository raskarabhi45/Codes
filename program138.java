//template for problems of  numbers

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

    //Add function here with the logic
}

class program______
{
    public static void main(String arg[])
    {
        Number nobj=new Number();
        int iRet=0;

        nobj.Accept();
        nobj.Display();;

        iRet=nobj._______(); 
    }
}
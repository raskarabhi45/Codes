//Pattern printing in java

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Display(int no)
    {
        for(int i=1;i<=no;i++)
        {
            System.out.println("*\t");
        }
    }
}

class program81
{
    public static void main(String arg[])
    {
        int ivalue=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the value");
        ivalue=sobj.nextInt();

        Pattern obj=new Pattern();
        obj.Display(ivalue);
    }
}
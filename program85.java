 //Pattern printing in java
 /*
  *Enter the value
5
1       2       3       4       5       5       4       3       2       1
  */

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Display(int no)
    {
        for(int i=1;i<=no;i++)
        {
            System.out.print(i+"\t");
        }
        for(int i=no;i>0;i--)
        {
        System.out.print(i+"\t");
        }
    }
}

class program85
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

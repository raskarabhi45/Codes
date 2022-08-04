/*input  row=4   column =4
Century..........

output  
* 
* *
* * *
* * * *

*/


import java.lang.*;
import java.util.*;

class Pattern
{
    public void Display(int row,int col)
    {
        int i=0,j=0;
        if(row!=col)
        {
            System.out.println("Invalid input");
            return;
        }

        for(i=1;i<=row;i++)
        {
            for(j=1;j<=col;j++)
            {
                if(i>=j)
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }

    }
}

class program101
{
    public static void main(String arg[])
    {

        Scanner sobj=new Scanner(System.in);
        Pattern obj=new Pattern();
        System.out.println("Enter number of rows");
        int no1=sobj.nextInt();
        System.out.println("Enter number of cols");
        int no2=sobj.nextInt();

        obj.Display(no1,no2);


    }
}
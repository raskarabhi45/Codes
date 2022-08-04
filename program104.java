/*input  row=4   column =4

output  
* 
a b c d
a b c d
a b c d
a b c d


*/


import java.lang.*;
import java.util.*;

class Pattern
{
    public void Display(int row,int col)
    {
        int i=0,j=0;
        char ch='\0';
        if(row!=col)
        {
            System.out.println("Invalid input");
            return;
        }

        for(i=1;i<=row;i++)
        {
            for(j=1,ch='a';j<=col;j++,ch++)
            {
                {
                    System.out.print(ch+"\t");
                }
            }
            System.out.println();
        }

    }
}

class program104
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
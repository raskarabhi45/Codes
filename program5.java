import java.lang.*;
import java.util.*;
/*
Enter the string
hello
h 
h e
h e l
h e l l
h e l l o
h e l l
h e l
h e
h
 */

class Pattern
{
    public void PatternX(char arr[])
    {

        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<i;j++)
            {
                System.out.print(arr[j]+" ");
            }
            System.out.println();
        }

        for(int i=arr.length-1;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print(arr[j]+" ");
            }
            System.out.println();
        }

       

    }
}

class program5
{
    public static void main(String arg[])
    {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the string");
        String str=sobj.nextLine();

        char arr[]=str.toCharArray();

        Pattern obj=new Pattern();
        obj.PatternX(arr);


    }
}
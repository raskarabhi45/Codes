//problems on n numbers
//Array call by address
import java.lang.*;
import java.util.*;

class Number
{
    public void Display(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);

        }
    }
}


class program64
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int arr[]=new int[5];

        Number obj=new Number();

        System.out.println("ENter elements");
        
        for(int i=0;i<5;i++)
        {
            arr[i]=sobj.nextInt();
        }

        obj.Display(arr);
    }
}
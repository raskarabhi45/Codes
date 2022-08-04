//accept n numbers and perform addition of that numbers
import java.lang.*;
import java.util.*;

class ArrayR
{
    public int AddNumbers(int []array)
    {
        int sum=0;
        for(int i=0;i<array.length;i++)
        {
            sum=sum+array[i];
            
        }
        return sum;
    }
}

class program72
{
    public static void main(String arg[])
    {
        int ret=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the size of the Array");
        int isize=sobj.nextInt();

        int []MyArray=new int[isize];

        System.out.println("Enter the elements of the Array");
        for(int i=0;i<isize;i++)
        {
            MyArray[i]=sobj.nextInt();
        }
        ArrayR obj=new ArrayR();
        System.out.println("Addition of numbers is :"+obj.AddNumbers(MyArray));
    }
}
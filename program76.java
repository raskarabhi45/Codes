//find out the frequency of that number
//accept n numbers and perform addition of that numbers
import java.lang.*;
import java.util.*;

class ArrayR
{
    public int Frequency(int array[],int no)
    {
        int sum=0,fre=0;
        for(int i=0;i<array.length;i++)
        {
            if(array[i]==no)
            {
                fre++;
            }
            
        }
        return fre;
    }
}

class program76
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

        System.out.println("ENter number to calculate frequency");
        int no=sobj.nextInt();

        ArrayR obj=new ArrayR();
        System.out.println("Frequency of the number is:"+obj.Frequency(MyArray,no));
    }
}
//template for problems on n numbers
import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];
    
    public ArrayX(int iNo)
    {
        Arr=new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("ENter the values:");
        
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    //add function here with logic
    
 
}

class program_________
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iLength=0,iRet=0;

        System.out.println("Enter the value for constructor:");
        iLength=sobj.nextInt();

        ArrayX obj=new ArrayX(iLength);

        obj.Accept();
        obj.Display();

        iRet=obj.______();

        obj=null;

    }
}
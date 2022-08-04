//program to get power of number
import java.lang.*;
import java.util.*;

class Power
{
    public int PowerR(int no1,int no2)
    {
        int mult=1;
        for(int i=1;i<=no2;i++)
        {
            mult=mult*no1;
        }
        return mult;
    }
}

class program56
{
    public static void main(String arg[])
    {
        int no1=0,no2=0,ret=0;
        Power obj=new Power();
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter base");
        no1=sobj.nextInt();

        System.out.println("Enter power");
        no2=sobj.nextInt();

        ret=obj.PowerR(no1,no2);
        System.out.println("Result is :"+ret);


    }
}
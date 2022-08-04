//program to get sum of number of digits in a number;
import java.lang.*;
import java.util.*;


class Count
{
    public int SumDigits(int no)
    {
        int i=0,sum=0,digit=0;

        if(no<0)
        {
            no=-no;
        }

        while(no>0)
        {
            digit=no%10;
            sum=sum+digit;
            no=no/10;
        }
        return sum;
    }
}


class program50
{
    public static void main(String arg[])
    {
        Count obj=new Count();
        int no=0,ret=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        ret=obj.SumDigits(no);
        System.out.println("Sum of digits are :"+ret);

       
        

    }
}
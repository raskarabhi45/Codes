//program to get  even digits in a number;
import java.lang.*;
import java.util.*;


class Count
{
    public void DisplayEvenDigit(int no)
    {
        int i=0,sum=0,digit=0;

        if(no<0)
        {
            no=-no;
        }

        while(no>0)
        {
            digit=no%10;
            if(digit%2==0)
            {
            System.out.println(digit);
            }
            
            no=no/10;
        }
       
    }
}


class program51
{
    public static void main(String arg[])
    {
        Count obj=new Count();
        int no=0,ret=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        obj. DisplayEvenDigit(no);
      

       
        

    }
}
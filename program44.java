//program to check whether number is prime or not
//with best logic
import java.lang.*;
import java.util.*;

class Prime
{
    public boolean CheckPrime(int no)
    {
        int i=0;
        if(no<0)
        {
            no=-no;
        }

        for( i=2;i<=no/2;i++)
        {
            if(no%i==0)
            {
                break;
            }
        }
        if(i==((no/2)+1))          //logic
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program44
{
    public static void main(String arg[])
    {
        Prime obj=new Prime();
        int no=0;
        boolean ret=false;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();

        ret=obj.CheckPrime(no);
        if(ret==true)
        {
            System.out.println("Number is prime");
        }
        else
        {
            System.out.println("Number is not prime");
        }

    }
}
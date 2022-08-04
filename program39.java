//program to check whether number is prime or not
import java.lang.*;
import java.util.*;

class Prime
{
    public boolean CheckPrime(int no)
    {
        boolean bflag=true;
        if(no<0)
        {
            no=-no;
        }

        for(int i=2;i<=no/2;i++)
        {
            if(no%i==0)
            {
                bflag=false;
                break;
            }
        }
        return bflag;
    }
}

class program39
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
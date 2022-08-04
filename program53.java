//accept number from user and reverse that number
import java.lang.*;
import java.util.*;

class Reverse
{
    public int ReverseNumber(int no)
    {
        int digit=0,rev=0;

        while(no>0)
        {
            digit=no%10;
            rev=rev*10+digit;
            no=no/10;
        }
        return rev;
    }
}

class program53
{
    public static void main(String arg[])
    {
        
        int ret=0,no=0;
        Reverse obj=new Reverse();
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        ret=obj.ReverseNumber(no);
        System.out.println("Reverse number is "+ret);
        

    }
}

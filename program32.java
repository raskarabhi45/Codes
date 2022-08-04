//Display sum of factors
import java.lang.*;
import java.util.*;

class Factor
{
    public int SumofFactors(int no)
    {
        int sum=0;
        for(int i=1;i<=no/2;i++)
        {
            if(no%i==0)
            {
                sum=sum+i;
            }
        }
        return sum;
    }

}


class program32
{
    public static void main(String arg[])
    {
        Factor obj=new Factor();
        int no=0,ret=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number");
        no=sobj.nextInt();

        ret=obj.SumofFactors(no);
        System.out.println("Sum of factors is :"+ret);
        

    }
}
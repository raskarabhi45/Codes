//check Armstrong number...
import java.lang.*;
import java.util.*;

class Armstrong
{
    public boolean CheckArmstrong(int no)
    {
        int temp=0,mult=1;
        int digit=0,sum=0,dcnt=0;

        if(no<0)
        {
            no=-no;
        }
        temp=no;

        while(no!=0)
        {
            dcnt++;
            no=no/10;
        }
        no=temp;
        {
            while(no!=0)
            {
                mult=1;
                digit=no%10;

                for(int i=1;i<=dcnt;i++)
                {
                    mult=mult*digit;
                }
                sum=sum+mult;
                no=no/10;
            }
            if(sum==temp)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

class program60
{
    public static void main(String arg[])
    {
        Armstrong obj=new Armstrong();
        int no=0;
        boolean ret;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
         no=sobj.nextInt();
         ret=obj.CheckArmstrong(no);
         if(ret==true)
         {
         System.out.println("Number is Armstrong number");
         }
         else
         {
             System.out.println("Number is not armstrong");
         }

    }
}
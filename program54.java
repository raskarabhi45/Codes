//accept number from user and and check whether number is palimdrome or not 

import java.lang.*;
import java.util.*;

class Reverse
{
    public void CheckPallindrome(int no)
    {
        int digit=0,rev=0;
        int temp=no;

        while(no>0)
        {
            digit=no%10;
            rev=rev*10+digit;
            no=no/10;
        }
        if(rev==temp)
        {
            System.out.println("Number is Pallindrome");
        }
        else
        {
            System.out.println("Number is not pallindrome");
        }

    }
}

class program54
{
    public static void main(String arg[])
    {
        
        int ret=0,no=0;
        Reverse obj=new Reverse();
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        obj.CheckPallindrome(no);
       
        

    }
}

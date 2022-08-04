//program to count number of digits
import java.lang.*;
import java.util.*;


class Count
{
    public int CountDigits(int no)
    {
        int i=0,cnt=0,digit=0;

        if(no<0)
        {
            no=-no;
        }

        while(no>0)
        {
            cnt++;
            no=no/10;
        }
        return cnt;
    }
}


class program48
{
    public static void main(String arg[])
    {
        Count obj=new Count();
        int no=0,ret=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        ret=obj.CountDigits(no);
        System.out.println("Number of digits are :"+ret);

       
        

    }
}
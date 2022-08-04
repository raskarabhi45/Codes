//problems on digits.........
import java.lang.*;
import java.util.*;


class Digit
{
    public void DisplayDigits(int no)
    {
        int i=0,digit=0;
        if(no<0)
        {
            no=-no;
        }

        while(no>0)
        {
            digit=no%10;
            System.out.println(digit);
            no=no/10;
        }
    }
}


class program46
{
    public static void main(String arg[])
    {
        Digit obj=new Digit();
        int no=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        no=sobj.nextInt();
        obj.DisplayDigits(no);

       
        

    }
}
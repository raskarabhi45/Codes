//Accept n number and display its factors
import java.lang.*;
import java.util.*;

class Factor
{
    public void DisplayFactors(int no)
    {
        for(int i=1;i<=no/2;i++)
        {
            if(no%i==0)
            {
                System.out.println(i);
            }
        }
    }

}


class program28
{
    public static void main(String arg[])
    {
        Factor obj=new Factor();
        int no=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number");
        no=sobj.nextInt();

        obj.DisplayFactors(no);
        

    }
}
//program to check whether number is perfect or not
import java.lang.*;
import java.util.*;

class Perfect
{
    int sum=0;

    public boolean CheckPerfect(int no)
    {
        if(no<0)
        {
            no=-no;
        }
        for(int i=1;i<=(no/2) &&(sum<no);i++)
        {
            if(no%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==no)
        {
            return true;
        }
        else
        {
            return false;
        }


    }
}

class program33
{
    public static void main(String arg[])
    {
        Perfect obj=new Perfect();
        int no=0;
        boolean ret=false;

        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter nummber");
        no=sobj.nextInt();

        ret=obj.CheckPerfect(no);
        if(ret==true)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not perfect");
        }


    }

}
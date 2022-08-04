//Gold coin switch case
import java.lang.*;
import java.util.*;

class Gold
{
    public void JwelewsPortal(int igram)
    {
        switch(igram)
        {
            case 1:
            System.out.println("Your bill amount is 4000");
            break;

            case 2:
            System.out.println("Your bill amount is 8000");
            break;

            case 5:
            System.out.println("Your bill amount is 20000");
            break;

            case 10:
            System.out.println("Your bill amount is 40000");
            break;

            default:
            System.out.println("Invalid weight");
        }

    }

}


class program27
{
    public static void main(String arg[])
    {
        Gold obj=new Gold();
        Scanner sobj=new Scanner(System.in);
        int ivalue=0;

        System.out.println("Enter the gold coin that you want to purchase");
        ivalue=sobj.nextInt();

        obj.JwelewsPortal(ivalue);


    }
}
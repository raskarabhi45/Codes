// Display number in binary
//check whether 21st bit is on or off
/*Enter number
1048576
Bit is onf */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public boolean CheckBit(int ino)
   {
    int imask=0X00100000;             //1048576;            //mask designing
    int iresult=0;

    iresult=ino & imask;  //operation

    if(iresult==0)
    {
        return false;
    }
    else
    {
        return true;
    }
   }
}

class program169
{
    public static void main(String arg[])
{
    Scanner sobj=new Scanner(System.in);
    System.out.println("Enter number");
    int value=sobj.nextInt();

    Bitwise bobj=new Bitwise();
    boolean bret=bobj.CheckBit(value);

    if(bret==true)
    {
        System.out.println("Bit is on");
    }
    else
    {
        System.out.println("Bit is off");
    }
}
}


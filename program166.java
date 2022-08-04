//Problems on bitwise operators  & | ^
// Display number in binary
//check whether 3rd bit is on or off
/*Enter number
11
Bit is off */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public boolean CheckBit(int ino)
   {
    int imask=4; //0100
    int iresult=0;

    iresult=ino & mask;

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

class program166
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


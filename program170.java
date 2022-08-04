// Display number in binary
//check whether 14th bit is on or off
/*
0000 0000 0000 0000 0010 0000 0000 0000
  0   0    0    0     2   0     0    0   
 
Enter number
8192
Bit is on
 */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public boolean CheckBit(int ino)
   {
    int imask=0X00002000;             //1048576;            //mask designing
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

class program170
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


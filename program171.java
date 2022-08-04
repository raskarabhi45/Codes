// Display number in binary
// turn on 4th bit if it is off
/*
0000 0000 0000 0000 0000 0000 0000 1000
  0   0    0    0     0   0     0    8   
 
Enter number
7
Updated number is : 15
 */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public int OnBit(int ino)
   {
    int imask=0X00000008;             
    int iresult=0;

    iresult=ino | imask;  //or operation
    return iresult;
    
   }
}

class program171
{
    public static void main(String arg[])
{
    Scanner sobj=new Scanner(System.in);
    System.out.println("Enter number");
    int value=sobj.nextInt();

    Bitwise bobj=new Bitwise();
    int iret=bobj.OnBit(value);

  System.out.println("Updated number is : "+iret);
}
}


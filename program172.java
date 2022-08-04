// Display number in binary
// turn on 27th bit if it is off
/*
mask
0000 0100 0000 0000 0000 0000 0000 1000
  0   4    0    0     0   0     0    0   
 
Enter number
1
Updated number is : 67108865
Enter number
67108864
Updated number is : 67108864
 */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public int OnBit(int ino)
   {
    int imask=0X04000000;             
    int iresult=0;

    iresult=ino | imask;  //or operation
    return iresult;
    
   }
}

class program172
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


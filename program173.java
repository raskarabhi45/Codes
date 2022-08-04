// Display number in binary
// toggle 4th bit 
/*
0000 0000 0000 0000 0000 0000 0000 1000
  0   0    0    0     0   0     0    8   
 
Enter number
12
Updated number is : 4

Enter number
8
Updated number is : 0
Enter number
0
Updated number is : 8
 */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public int ToggleBit(int ino)
   {
    int imask=0X00000008;             
    int iresult=0;

    iresult=ino ^ imask;  //xor
    return iresult;
    
   }
}

class program173
{
    public static void main(String arg[])
{
    Scanner sobj=new Scanner(System.in);
    System.out.println("Enter number");
    int value=sobj.nextInt();

    Bitwise bobj=new Bitwise();
    int iret=bobj.ToggleBit(value);

  System.out.println("Updated number is : "+iret);
}
}


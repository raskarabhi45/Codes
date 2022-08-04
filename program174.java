// Display number in binary
// toggle 4th and 7th bit
/*
0000 0000 0000 0000 0000 0000 0100 1000
  0   0    0    0     0   0     4    8   
 
Enter number
72
Updated number is : 0

Enter number
55
Updated number is : 127
 */

import java.lang.*;
import java.util.*;

class Bitwise
{
   public int ToggleBit(int ino)

   {
    int imask=0X00000048;             
    int iresult=0;

    iresult=ino ^ imask;  
    return iresult;
    
   }
}

class program174
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


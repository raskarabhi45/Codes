// Display number in binary
//Accept position and 
// toggle bit of that position
/*
0000 0000 0000 0000 0000 0000 0000 0001
  0   0    0    0     0   0     0    1  
 
Enter number
2
Enter position
2
Updated number is : 0

Enter number
49
Enter position
5
Updated number is : 33
*/

import java.lang.*;
import java.util.*;

class Bitwise
{
   public int ToggleBit(int ino,int ipos)
   {
    //Filter
    if((ipos<=0)||(ipos>32))
    {
        System.out.println("Invalid position");
        return 0;
    }
    int imask=0X00000001;          
    int iresult=0;

    imask=imask<<ipos-1;   //Logic

    iresult=ino ^ imask;  //dynamic mask creation
    return iresult;
    
   }
}

class program176
{
    public static void main(String arg[])
{
    Scanner sobj=new Scanner(System.in);
    System.out.println("Enter number");
    int value=sobj.nextInt();

    System.out.println("Enter position");
    int pos=sobj.nextInt();

    Bitwise bobj=new Bitwise();
    int iret=bobj.ToggleBit(value,pos);

  System.out.println("Updated number is : "+iret);
}
}


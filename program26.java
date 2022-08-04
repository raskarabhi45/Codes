import java.lang.*;
import java.util.*;

import javax.sound.sampled.SourceDataLine;

class Hello
{
     public void DisplayClass(int per)
     {
         if(per>=70 && per<100)
         {
             System.out.println("First class with distinction");
         }
         else if(per>=60 && per<70)
         {
             System.out.println("First class");
         }
         else if(per>=50 && per<60)
         {
             System.out.println("Second class");
         }
         else if(per>=35 && per <50)
         {
             System.out.println("third class");
         }
         else if(per >0 && per<35)
         {
             System.out.println("You are fail");
         }
         else
        {
            System.out.println("Invalid marks");
        }
     }
    
}

class program26
{
    public static void main(String arg[])
    {
        Hello obj=new Hello();
        Scanner sobj=new Scanner(System.in);
     int n=0;
     boolean ret=false;
     System.out.println("Enter percentage");
    n=sobj.nextInt();
    obj.DisplayClass(n);
    }
  
}
/*input  row=4   column =4

output  
* * * *
* & & * 
* & & *
* * * *

*/
import java.lang.*;
 import java.util.*;

 class Pattern
 {
     public void Display(int row,int col)
     {
         int i=0,j=0;
         for(i=1;i<=row;i++)
         {
             for(j=1;j<=col;j++)
             {
                 if((i==1)||(j==1)||(i==row)||(j==col))
                 {
                 System.out.print("*\t");
                 }
                 else
                 {
                     System.out.print("&\t");
                 }
             }
             System.out.println();
         }
     }
 }

 class program97
 {
     public static void main(String arg[])
     {
         Scanner sobj=new Scanner(System.in);
         Pattern obj=new Pattern();
         System.out.println("ENter no of rows");
         int no1=sobj.nextInt();
         System.out.println("Enter no of columns");
         int no2=sobj.nextInt();

         obj.Display(no1,no2);
     }
 }

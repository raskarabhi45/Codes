/*input  row=4   column =4
interview for sure
output  
$ 2 3 4
1 $ 3 4
1 2 $ 4
1 2 3 $
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
                 if(i==j)
                 {
                 System.out.print("$\t");
                 }
                 else
                 {
                     System.out.print(j+"\t");
                 }
             }
             System.out.println();
         }
     }
 }

 class program93
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

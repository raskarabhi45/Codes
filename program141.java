import  java.lang.*;
import java.util.Scanner;

class program141
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
    
       String name="Abhishek";
       String sirname="Raskar";
       String fullname=name+" "+sirname;
       System.out.println(name.length());
       System.out.println(sirname.length());
       //charAt()
       for(int i=0;i<name.length();i++)
       {
       System.out.println(name.charAt(i));
       }
       //compare string
       //1 s1>s2;   ....+value
       //2 s1==s2  ....zero
       //3 s1<s2;     -ve value
       String name1="Rohit";
       String name2="Rohit";

       if(name1.compareTo(name2)==0)
       {
           System.out.println("Strings are equal");
       }
       else
       {
           System.out.println("Strings are not equal");
       }

       if(name1==name2)   //this gets is fail in some cases 
       {
           System.out.println("Strings are equal");
       }
       else
       {
           System.out.println("Strings are not equal");
       }

       if(new String("Abhi")==new String("Abhi"))
       {
        System.out.println("Strings are equal");
    }
    else
    {
        System.out.println("Strings are not equal");
    }

    //substrings in java
    String sentence="My name is Abhishek Raskar";
    String name3=sentence.substring(11);
    System.out.println(name3);
    String name4=sentence.substring(11,19);
    System.out.println(name4);
       
       }
}

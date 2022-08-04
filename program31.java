import java.lang.*;
import java.util.*;
class Factors
{
public void DisplayFactors(int iNo) //shop
{
      int iCnt=0;
      if(iNo<0)
    {
        iNo=-iNo;
    }
  
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)   //iCnt<=iNo-1
    {
    if((iNo%iCnt)==0)
    {
     System.out.println(iCnt);
    }
    
}
}
}
class program31
{
public static void main(String a[])
{
    Factors obj=new Factors();
    Scanner sobj=new Scanner(System.in);
    int iValue=0;

    System.out.println("Enter number:\n");
     iValue=sobj.nextInt();

    obj.DisplayFactors(iValue); //home

}
}
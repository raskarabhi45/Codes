//to display even number in array
#include<stdio.h>
#include<stdlib.h>  

int CountEven(int Arr[],int iLength )
{
    int iCnt=0,iEvenCount=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        { 
            iEvenCount++;
        }
    }return iEvenCount;

}

int main()
{
   register int iCnt=0,iRet=0;
   int *ptr=NULL;
   int iSize=0;

   printf("Enter number of elements :\n");
   scanf("%d",&iSize);

   ptr=(int*)malloc(iSize*sizeof(int));

   printf("Enter the values of array:\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
        scanf("%d",&ptr[iCnt]);
   }

   iRet=CountEven(ptr,iSize);
   printf("Number of even elements are %d\n",iRet);
   free(ptr);

    return 0;
}

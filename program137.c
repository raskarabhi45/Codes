//Accept n numbers and display addition of it
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int sum=0;
    for(int i=0;i<iSize;i++)
    {
        sum=sum+Arr[i];
    }

    return sum;
}

int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength); //ptr=(int*)malloc(sizeof(int)*length)

   printf("Enter the values of array\n");

   for(int i=0;i<iLength;i++)
   {
       scanf("%d",&ptr[i]);
   }

   iRet=Summation(ptr,iLength);
   printf("Addition is : %d\n",iRet);

   free(ptr);


return 0;
}

//Given an array of size N and two index options i and j
//remove all the elements from i to j(inclusive)in the array


#include<stdio.h>
/*int ArrayModification(int *arr, int len,int i,int j)
{
    int c=0,k;
    for(k=i;k<=j;k++)
    {
      arr[k]=0;
    }
    for(k=0;k<len;k++)
    {
        if(arr[k]!=0)
          c++;
    }
    return c;
}*/
int ArrayModification(int *arr, int len,int start,int end)
{
    int c=0,i,j;
   for(i=start,j=end+1;i<=end;i++,j++)
   {
       arr[i]=arr[j];
       c++;
   }
return len-c;
}
void main()
{
    int i,j,len,x;
    int arr[30];
    printf("length:");
    scanf("%d",&len);

     printf("Array elements:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter index values:");
    scanf("%d%d",&i,&j);
    x=ArrayModification(arr,len,i,j);
    printf("Final Array length:%d",x);
    for(i=0;i<x;i++)
    {
      printf("\n%d",arr[i]);
    }
}

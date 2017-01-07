#include<stdio.h>
void main()
{
 int a[100],i,n;
 printf("enter size of array");
 scanf("%d",&n);
 printf("enter the elements of array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 int max=a[0],min=a[0];
 for(i=1;i<n;i++)
{
 if(a[i]>max)
 max=a[i];
 else
 min=a[i];
}
printf("max element of array is=%d",max);
printf("min element of array is=%d",min);
}
 

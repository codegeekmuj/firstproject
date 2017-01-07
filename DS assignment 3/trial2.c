#include<stdio.h>
void main()
{
 int i,j,t,n,sum=0;
 printf("enter size of array");
 scanf("%d",&n);
 int a[n];
 printf("enter elements of array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter sum");
 scanf("%d",&sum);
 for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
{
 if(a[i]>a[j])
{
 t=a[i];
 a[i]=a[j];
 a[j]=t;
}
}
}
int l=0,r=n-1;
 while(l<r)
{
 if(a[l]+a[r]==sum)
{
 printf("pair is = %d %d\n",a[l],a[r]);
l++;
}
 else if(a[l]+a[r]<sum)
 l++;
 else
 r--;
}
}

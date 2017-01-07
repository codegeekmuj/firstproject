#include<stdio.h>
#include<malloc.h>
void main()
{
 int *a,*b;
 int n1,n2,i,j,c=0;
 printf("enter the size");
 scanf("%d",&n1);
 a=(int*)malloc(sizeof(int)*n1);
 printf("enter the elements");
 for(i=0;i<n1;i++)
 scanf("%d",&a[i]);
 

 printf("enter the size");
 scanf("%d",&n2);
 b=(int*)malloc(sizeof(int)*n2);
 printf("enter the elements");
 for(i=0;i<n2;i++)
 scanf("%d",&a[i]);
 if(n1>n2)
{
 
 for(i=0,j=0;i<n1,j<n2;i++,j++)
{ 
 if(a[i]==b[j])
{
 c++;

if(c>=1)
break;
}
}
printf("array 2 is subset of 1");
c=0;
}
else if(n1==n2)
{
 for(i=0,j=0;i<n1,j<n2;i++,j++)
{ 
 if(a[i]==b[j])
{
 c++;

if(c>=1)
break;
}
}
printf("array 2 is subset of 1 or array 1 is subset of 2");
c=0;
}
else
{
 for(i=0,j=0;i<n1,j<n2;i++,j++)
{ 
 if(a[i]==b[j])
{
 c++;

if(c>=1)
break;
}
}
printf("array 1 is subset of 2");
c=0;
}
}

 

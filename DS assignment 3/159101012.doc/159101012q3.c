#include<stdio.h>
struct node
{
int min;
int max;
};
struct node getMINMAX(int x[],int num)
{
struct node minmax;
int i;
if(num==1)
{
minmax.max=x[0];
minmax.min=x[0];
return minmax;
}
if(x[0]>x[1])
{
minmax.max=x[0];
minmax.min=x[1];
}
else
{
minmax.max=x[1];
minmax.min=x[0];
}
for(i=2;i<num;i++)
{
if(x[i]>minmax.max)
 minmax.max=x[i];
else if(x[i]<minmax.min)
 minmax.min=x[i];
}
return minmax;
}
int main()
{
int x[]={4,3,1,6,5,2};
int x_size=6;
struct node minmax=getMINMAX(x,x_size);
printf("\n Maximum term is : %d",minmax.max);
printf("\n Minimum term is : %d",minmax.min);
getchar();
}


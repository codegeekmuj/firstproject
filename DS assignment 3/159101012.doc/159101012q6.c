#include<stdio.h>
#include<malloc.h>
struct node 
{
int data;
struct node *ptr;
};
void insert(struct node**i,int val)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->ptr=(*i);
(*i)=newnode;
}
int cnt(struct node *start,int n)
{
struct node *t=start;
int count=0;
while(t!=NULL)
{
if(t->data==n)
count++;
t=t->ptr;
}
return count;
}
void main()
{
struct node *start=NULL;
insert(&start,20);
insert(&start,30);
insert(&start,40);
insert(&start,30);
insert(&start,30);
printf("\n Count of 30 is %d",cnt(start,30));
}


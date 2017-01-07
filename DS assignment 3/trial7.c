#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *ptr;
};

int main()
{
 
 struct node *t,*last,*start=NULL,*p,*prev=NULL;
 int i,n;
 printf("enter the node");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
 t=(struct node*)malloc(sizeof(struct node));
 printf("enter data");
 scanf("%d",&(t->data));
 t->ptr=NULL;
 if(start==NULL)
{
 start=t;
}
else
{
 last->ptr=t;
}
last=t;
}
for(t=start;t!=NULL;t=t->ptr)
{
 t->ptr=prev;
 prev=t;
 t=prev;
 printf("%d",t->data);
}
}







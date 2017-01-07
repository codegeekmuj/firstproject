#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *ptr;
};

int main()
{
 
 struct node *t,*last,*start=NULL,*p;
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
 p=start->ptr;
 int c=1;
for(t=start;t!=NULL;t=t->ptr)
{
 
 for(p=t->ptr;p!=NULL;p=p->ptr)
{
 if(t->data==p->data&&t->data!=-1)
{
 c++;
 p->data=-1;
}
}
if(c>=1&&t->data!=-1)
{
printf("%d",t->data);
c=1;
}
}
}


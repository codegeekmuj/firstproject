#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *ptr;
};

int main()
{
 
 struct node *t,*last,*x,*start=NULL;
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


 x=start;
 while(x!=NULL&&x->ptr!=NULL)
{
 int p;
 
 p=x->data;
 x->data=x->ptr->data;
 x->ptr->data=p;
 x=x->ptr->ptr;
}
for(t=start;t!=NULL;t=t->ptr)
printf("%d",t->data);


}


 



 
 

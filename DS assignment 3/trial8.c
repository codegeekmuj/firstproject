#include<stdio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *ptr1;
};

int main()
{
 
 struct node *t1,*last1,*start1=NULL;
 int i,n,c;
 printf("enter the node");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
 t1=(struct node*)malloc(sizeof(struct node));
 printf("enter data");
 scanf("%d",&(t1->data));
 t1->ptr1=NULL;
 if(start1==NULL)
{
 start1=t1;
}
else
{
 last1->ptr1=t1;
}
last1=t1;
}


 struct node *t2,*last2,*start2=NULL;
 int x;
 printf("enter the node");
 scanf("%d",&x);
 for(i=1;i<=x;i++)
{
 t2=(struct node*)malloc(sizeof(struct node));
 printf("enter data");
 scanf("%d",&(t2->data));
 t2->ptr1=NULL;
 if(start2==NULL)
{
 start2=t2;
}
else
{
 last2->ptr1=t2;
}
last2=t2;
}




 struct node *t3,*last3,*start3=NULL,*p;
 if(n>=x)
 c=n;
 else
 c=x;
 
 
 for(i=1;i<=c;i++)
{
 t3=(struct node*)malloc(sizeof(struct node));
 t3->ptr1=NULL;
  if(start3==NULL)
{
 start3=t3;
}
else
{
 last3->ptr1=t3;
}
last3=t3;
}
 
 t1=start1;
 t2=start2;
 t3=start3;
 while((t1!=NULL)&&(t2!=NULL))
{
 t3->data=t1->data+t2->data;
 t3=t3->ptr1;
 t1=t1->ptr1;
 t2=t2->ptr1;
}
 if(t1!=NULL)
{
 for(p=t1;p!=NULL;p=p->ptr1)
{
 t3->data=p->data;
 t3=t3->ptr1;
}
 
 for(t3=start3;t3!=NULL;t3=t3->ptr1)
 printf("%d",t3->data);
}
 

else if(t2!=NULL)
{
 for(p=t2;p!=NULL;p=p->ptr1)
{
 t3->data=p->data;
 t3=t3->ptr1;
}
 
 for(t3=start3;t3!=NULL;t3=t3->ptr1)
 printf("%d",t3->data);
}


 else
{
 for(t3=start3;t3!=NULL;t3=t3->ptr1)
 printf("%d",t3->data);
}

}
 

 



 



 






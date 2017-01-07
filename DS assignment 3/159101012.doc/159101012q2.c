#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *ptr;
};
void swap(int *x,int *y);
void grpswap(struct node *t)
{
struct node *a=t;
while(a!=NULL && a->ptr!=NULL)
{
swap(&a->data, &a->ptr->data);
a=a->ptr->ptr;
}
}
void swap(int *x,int *y)
{
int a;
a=*x;
*x=*y;
*y=a;
}
void push(struct node** t2,int n_data)
{
struct node* n_node=(struct node*)malloc(sizeof(struct node));
n_node->data=n_data;
n_node->ptr=(*t2);
(*t2)=n_node;
}
void print(struct node *node)
{
while(node!=NULL)
{
printf("%d",node->data);
node=node->ptr;
}
}
int main()
{
struct node *start=NULL;
push(&start,5);
push(&start,4);
push(&start,3);
push(&start,2);
push(&start,1);
printf("Linked list initially\n");
print(start);
grpswap(start);
printf("\n Linked list later\n");
print(start);
return 0;
}

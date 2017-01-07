#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *ptr;
};
void remduplicate(struct node *t)
{
struct node *start=t;
struct node *ptr_ptr;
if(start==NULL)
return;
while(start->ptr!=NULL)
{
if(start->data==start->ptr->data)
{
ptr_ptr=start->ptr->ptr;
free(start->ptr);
start->ptr=ptr_ptr;
}
else
{
start=start->ptr;
}
}
}
void insert(struct node **t1,int n_data)
{
struct node *n_node=(struct node*)malloc(sizeof(struct node));
n_node->data=n_data;
n_node->ptr=(*t1);
(*t1)=n_node;
}
void display(struct node *node)
{
while(node!=NULL)
{
printf("%d",node->data);
node=node->ptr;
}
}
void main()
{
struct node *t=NULL;
insert(&t,2);
insert(&t,3);
insert(&t,3);
insert(&t,4);
insert(&t,4);
insert(&t,4);
printf("\n Linked list before duplicate number is removed:");
display(t);
remduplicate(t);
printf("\n Linked list after duplicate number removal");
display(t);
}

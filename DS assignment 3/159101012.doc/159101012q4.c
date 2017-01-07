#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* ptr;
};
static void rev(struct node** t1)
{
struct node* start=NULL;
struct node* t= *t1;
struct node* ptr;
while(t!=NULL)
{
ptr=t->ptr;
t->ptr=start;
start=t;
t=ptr;
}
*t1=start;
}
void push(struct node** t1,int n_data)
{
struct node* n_node= (struct node*)malloc(sizeof(struct node));
n_node->data=n_data;
n_node->ptr=(*t1);
(*t1)=n_node;
}
void print(struct node *t2)
{
struct node *y=t2;
while(y!=NULL)
{
printf("%d ",y->data);
y=y->ptr;
}
}
int main()
{
struct node* t2=NULL;
push(&t2,30);
push(&t2,23);
push(&t2,11);
push(&t2,8);
print(t2);
rev(&t2);
printf("\n Reversed Linked List is..:\n");
print(t2);
getchar();
}


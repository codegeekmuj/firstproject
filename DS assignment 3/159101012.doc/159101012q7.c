#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* ptr;
};

static void reverse(struct node** t1)
{
    struct node* start   = NULL;
    struct node* t = *t1;
    struct node* ptr;
    while (t != NULL)
    {
        ptr  = t->ptr;  
        t->ptr = start;   
        start = t;
        t = ptr;
    }
    *t1 = start;
}


void push(struct node** t1, int new_data)
{
    
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
           
    
    new_node->data  = new_data;
               
    new_node->ptr = (*t1);    
       
    (*t1)    = new_node;
}

void display(struct node *t2)
{
    struct node *y = t2;
    while(y!= NULL)
    {
        printf("%d  ", y->data);    
        y = y->ptr;  
    }
}    

int main()
{
     struct node* t2 = NULL;
  
     push(&t2, 20);
     push(&t2, 4);
     push(&t2, 15); 
     push(&t2, 85);      
    
     display(t2);    
     reverse(&t2);                      
     printf("\n Reversed Linked list \n");
     display(t2);    
}

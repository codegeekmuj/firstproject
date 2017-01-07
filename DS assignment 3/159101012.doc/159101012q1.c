#include<stdio.h>
void fun(int A[], int num)
{
    int temp[num], i;
    for (i=0; i<num; i++)
      temp[A[i]] = i;

    for (i=0; i<num; i++)
      A[i] = temp[i];
}
void printA(int A[], int num)
{
    int i;
    for (i=0; i<num; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int A[] = {1, 3, 0, 2};
    int num = sizeof(A)/sizeof(A[0]);
    printf("Given array is \n");
    printA(A,num);
    fun(A,num);
    printf("Modified array is \n");
    printA(A,num);
    return 0;
}

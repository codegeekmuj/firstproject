# include <stdio.h>
# define bool int

void quickSort(int *, int, int);

bool t(int A[], int size, int sum)
{
    int l, r;

    quickSort(A, 0, size-1);

    l = 0;
    r = size-1; 
    while (l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else 
              r--;
    }    
    return 0;
}

int main()
{
    int A[] = {3, -5, 76, 36, 14, -27};
    int sum= 71;
    int size = 6;
   
    if( t(A, size, sum))
        printf("Array has two elements with sum 71");
    else
        printf("Array doesn't have two elements with sum 71 ");
    return 0;
}

void interchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

int separation(int A[], int start, int end)
{
    int x = A[end];
    int i = (start - 1);
    int j;

    for (j = start; j <= end - 1; j++)
    {
        if(A[j] <= x)
        {
            i++;
            interchange(&A[i], &A[j]);
        }
    }
    interchange (&A[i + 1], &A[end]);
    return (i + 1);
}

void quickSort(int A[], int start, int end)
{
    int separate;    
    if(start<end)
    {
        separate= separation(A, start, end);
        quickSort(A, start, separate - 1);
        quickSort(A, separate + 1, end);
    }
}

# include <stdio.h>
# include <stdlib.h>

// Selecion Sort
void SelectionSort(int *A, int n)
{
    int i, j, x, Min;

    for(i = 1; i <= n - 1; i++)
    {
        Min = i;
        for(j = i + 1; j <= n; j++)
        {
            if(A[j] < A[Min])
            {
                Min = j;
            }
        }
        x = A[Min];
        A[Min] = A[i];
        A[i] = x;
    }
}

// Bubble Sort
void BubbleSort(int A[], int n)
{
    int i, j, x;

    for(i = 1; i < n; i++)
    {
        for(j = n; j > i; j--)
        {
            if(A[j] < A[j - 1])
            {
                x = A[j];
                A[j] = A[j - 1];
                A[j - 1] = x;
            }
        }
    }
}

// Insertion Sort
void InsertionSort(int *A, int n)
{
    int i, j, x;

    for(i = 2; i <= n; i++)
    {
        x = A[i];
        j = i - 1;
        A[0] = x;
        while (x < A[j])
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main()
{

    return 0;
}


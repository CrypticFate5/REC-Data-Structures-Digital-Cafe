// Students of class CSE are given an array A of positive integers of size N. The student’s task is to sort the array in increasing order and print out the original index position of the new sorted array.

// NOTE: The indexing of the array starts with 0.

// Example:

// A={4,5,3,7,1}

// After sorting the new array becomes A={1,3,4,5,7}.

// The required output should be "4 2 0 1 3"  

// INPUT :

// The first line of input consists of the size of the array A

// The next line consists of the array of size N

// OUTPUT :

// Output consists of a single line of integers

// CONSTRAINTS:

// 1<=N<=10^6

// 0<=A[i]<=10^6


// Sample Input 1

// Input:

// 5                                                                                                                                                                                 

// 12 3 87 14 65                                                                                                                                                                      

// Output:

// 1 0 3 4 2

// Sample Input 2

// Input:

// 7                                                                                                                                                                                  

// 12 23 32 45 56 67 89                                                                                                                                                                      

// Output:

// 0 1 2 3 4 5 6


#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    long int arr[n], ind[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
        ind[i] = i;
    }
    long int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            long int temp, tempi;
            if (arr[i] > arr[j])
            {
                tempi = ind[i];
                ind[i] = ind[j];
                ind[j] = tempi;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%ld ", ind[i]);
    }
}

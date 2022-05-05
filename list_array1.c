// There are N students in a class. Students having two arrears are given the chance to appear for re-exam to clear those subjects in the same semester. Students can select subject1 or subject2 or both. Find the number of students who registered for both subjects.

// Input:

// 1. The first line of the input contains a single integer N denoting the number of students.

// 2. The second line contains N space-separated positive integers represents array subject1.

// 3. The second line contains N space-separated positive integers represents array subject2.

// Output: Print the count of students who registered for both subjects.

// Constraints:

// 1. 1 <= N <= 100000

// 2. 1 <= subject1[i] <= 100000

// 3. 1 <= subject2[i] <= 100000

// Sample Input 1

// Input:

// 5

// 1 2 3 4 5

// 3 4 5 6 7

// Output:

// 3

// Sample Input 2

// Input:

// 10

// 21 41 56 78 97 63 51 22 54 87

// 12 10 9 45 32 65 98 51 41 78

// Output:

// 2


#include <stdio.h>
int main()
{
    long int n;
    int c = 0;
    scanf("%ld", &n);
    long int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                c++;
            }
        }
    }
    printf("%d", c);
}

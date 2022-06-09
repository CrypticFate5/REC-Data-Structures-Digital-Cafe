// Ram is given n boxes kept one after the other each containing a number inside it. The boxes are indexed from 0 to n-1.

// Now Ram is asked to find the position of the box in which a specific number is stored. 

// Ram opens each box one-by-one and checks whether that box contains the given number or not.

// Implement the above scenario using linear search technique.

// Input Format

// The First line reads an integer representing the number of boxes.

// The Second line reads the Numbers (elements) hidden in the boxes.

// The Third line reads the Number to be searched .

// Output format

// Display the position(index) of the box in which the Number is found.

// if not found,display"Number not found."

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, i, flag = 0;
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number found at location : %d", i);
    }
    else
    {
        printf("Number not found.");
    }
    return 0;
}

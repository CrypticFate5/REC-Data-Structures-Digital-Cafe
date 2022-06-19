// Given a sorted array of  N integers representing the rollno of students in class and a target student  rollno, determine if the target student  exists in the class using the binary search algorithm. If student exists in the class, print the seat number of the student. Consider the seat number as the index of the sorted array.

// Input Format

// The first line reads the array of student register numbers

// The second line reads the search element

// Output Format

// Seat number of the student





// For example:

// Input	Result
// 100 101 102 103 104 105 105 106 107 108
// 103
// 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char arr[1000];
    int x,k=0,a;
    scanf("%[^\n]",arr);
    scanf("%d",&x);
    char*y=strtok(arr," ");
    while(y!=NULL){
        a=atoi(y);
        if(a==x){
            printf("%d",k);
            break;
        }
        k++;
        y=strtok(NULL," ");
    }
    return 0;
}

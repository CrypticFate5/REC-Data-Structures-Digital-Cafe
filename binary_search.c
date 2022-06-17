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


#include<stdio.h>
#include<stdlib.h>
void main(){
    int i ,*arr=NULL;
    for(i=0;i<5;i++){
         arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        printf("enter your number:");
        scanf("%d",&arr[i]);
    }
    free(arr);
}

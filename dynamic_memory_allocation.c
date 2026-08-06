#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,sum=0;
    int *arr=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("enter your number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);

}
#include<stdio.h>
void main(){
    int num,end,j;
    printf("enter the number u want the multiplication table:");
    scanf("%d",&num);
    printf("upto which number u want the table:");
    scanf("%d",&end);
    for(j=1;j<=end;j++){
       printf("%d x %d = %d",j,num,num*j);
       printf("\n");
    }
}
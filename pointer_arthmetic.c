#include<stdio.h>
void main(){
    int *pt,*pt2,num1,num2,sum;
    printf("enter ur number:");
    scanf("%d",&num1);
    printf("enter ur number:");
    scanf("%d",&num2);
    pt=&num1;
    pt2=&num2;
    sum=*pt+*pt2;
    printf("%d",sum);
}
#include<stdio.h>
void main(){
    int num,*swap,num2,*swap2,*temp;
    printf("enter ur number:");
    scanf("%d",&num);
    printf("enter ur number:");
    scanf("%d",&num2);
    swap=&num;
    swap2=&num2; 
    temp=swap;
    swap=swap2;
    swap2=temp;
    printf("%d\n",*swap);
    printf("%d\n",*swap2);
}
#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("enter ur 1st number:");
    scanf("%d",&num1);
    printf("enter ur 2nd number:");
    scanf("%d",&num2);
    printf("enter ur 3rd number:");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("the largest number is:%d",num1);
                }else{
                   printf("the largest number is:%d",num3);
                 }
    }else{
       if(num2>num3){
                  printf("the largest number is:%d",num2);
                    }else{
                         printf("the largest number is:%d",num3);
                    }
       
    }
}
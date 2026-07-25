#include<stdio.h>
int fact(int num){
    if(num==1){
        return 1;
    }else{
       return num * fact (num-1);
    }
}
int main(){
    int num;
    printf("enter a number to find its factorial:");
    scanf("%d",&num);
    printf("the factorial of the number is:%d",fact(num));
}
#include<stdio.h>
int prime(int num){
    int flag=0,i;
    if(num <= 1)
    {
    printf("It is not a prime number");
    return 0;
    }
     for(i=2;i<num;i++){
            if(num%i==0){
                flag=1;
                break;
            }   
    }
      if(flag==0){
        printf("it is a prime number:");
      }else{
        printf("it is not a prime number");
      }
      return 0;
}
int main(){
    int num;
    printf("enter ur number:");
    scanf("%d",&num);
    prime(num);
}
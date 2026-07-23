#include<stdio.h>
 int fact(int num ){
    int i,factorial=1;
    for(i=num;i>1;i--){
       factorial=factorial*i;
   
    }
    return factorial;
 }
int main(){
    int num;
    printf("enter ur number to find its factorial:");
    scanf("%d",&num);
    printf("the factorial is:%d", fact(num)  );
    return 0;
}
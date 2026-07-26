#include<stdio.h>
void fibonacci(int end){
    int num=0,ans=0,keep=1;
    while(ans<=end){  
          printf("%d ",ans);
          ans=num+keep;
          keep=num;
          num=ans;  
    }
}
void main(){
    int end;
     printf("upto which number u want :");
    scanf("%d",&end);
    fibonacci(end);
}
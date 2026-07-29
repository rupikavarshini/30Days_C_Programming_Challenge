#include<stdio.h>
void main(){
    int i,num[6],temp,flag=0,stop=0;
    for(i=0;i<=5;i++){
        printf("enter the number:");
        scanf("%d",&num[i]);
    }
    while(stop!=1){
        flag=0;
    for(i=0;i<=4;i++){
    if(num[i]>num[i+1]){
         temp=num[i+1];
         num[i+1]=num[i];
         num[i]=temp;
    }
   }
   for(i=0;i<=4;i++){
    if(num[i]>num[i+1]){
        flag=1;
         break;
    }
   }
   if(flag==0){
    for(i=0;i<=5;i++){
        printf("%d",num[i]);
    }
    printf("\nsorted successfully");
    stop=1;
   }
 }
}
#include<stdio.h>
 void main(){
 int i,number,arr[6],flag=0,mid;
    for(i=0;i<=5;i++){
    printf("enter ur number in ascending order:");
    scanf("%d",&arr[i]);
    }
    int high=5,low=0;
    printf("enter the number to find:");
    scanf("%d",&number);
    while(low<=high){
    mid = (low + high) / 2;
     if(arr[mid]==number){
             printf("the number is found in %d index",mid);
             flag=1;
             break;
    }
    if(arr[mid]<number){
        low=mid+1;
    }else{
      high=mid-1;
    } 
   
  }
  if(flag==0){
    printf("the number not found");
  }
}  

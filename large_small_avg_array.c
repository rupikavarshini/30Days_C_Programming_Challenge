#include<stdio.h>
void main(){
int arr[10],i,greatest,smallest,avg;
for(i=0;i<10;i++){
    printf("enter ur number:\n");
    scanf("%d",&arr[i]);
}
greatest=arr[0];
for(i=1;i<10;i++){
         if(arr[i]>greatest){
             greatest=arr[i];
            }
        }
printf("the largest number is:%d\n",greatest);
avg=arr[0];
for(i=1;i<10;i++){
      avg=avg+arr[i];
}
smallest=arr[0];
for(i=1;i<10;i++){
         if(arr[i]<smallest){
             smallest=arr[i];
            }
        }
avg=avg/10;
printf("the average number is %d\n",avg);
printf("the smallest number is:%d\n",smallest);
}
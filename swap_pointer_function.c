#include<stdio.h>
void pointers(int number[]){
    int *arr[5],i;
    for(i=0;i<5;i++){
        arr[i]=&number[i];
    } 
    for(i=0;i<5;i++){
        printf("%d",*arr[i]);
    }   

}
int main(){
    int i,number[5];
    for(i=0;i<5;i++){
        printf("enter the number:");
        scanf("%d",&number[i]);
    }
   pointers(number);
}
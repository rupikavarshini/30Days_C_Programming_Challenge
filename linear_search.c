 #include<stdio.h>
 void main(){
 int i,number,arr[6],flag=0;
    for(i=0;i<=5;i++){
    printf("enter ur number:");
    scanf("%d",&arr[i]);
    }
    printf("enter the number to find:");
    scanf("%d",&number);
    for(i=0;i<=5;i++){
        if(number==arr[i]){
            printf("the number is in %d index",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("element is not in the array");
    }
    
}
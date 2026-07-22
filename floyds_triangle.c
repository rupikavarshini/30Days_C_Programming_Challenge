#include<stdio.h>
void main(){
    int num,last=1,l=0,i,m=0;
    printf("enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        l=0;
        while(l<last){
            printf("%d\t",m);
            l++;
            m++;
        }
     printf("\n");
    last++;
    }
}

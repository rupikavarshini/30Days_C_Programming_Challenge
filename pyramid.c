#include<stdio.h>
void main(){
    int k,space,l,n,m=1,end;
    printf("enter the  odd number :");
    scanf("%d",&end);
    space=end;
    for(k=1;k<=end;k++){
        for(l=0;l<space;l++){
         printf(" ");
        }
        for(n=0;n<m;n++){

        printf("*");
        }
        printf("\n");
        m=m+2;
      space--;

    }

}
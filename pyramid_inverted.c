#include<stdio.h>
void main(){
    int k,space=0,l,n,m,end;
    printf("enter the  odd number :");
    scanf("%d",&end);
    m=end;

    for(k=end;k>=1;k--){
        space++;
        for(l=0;l<space;l++){
         printf("     ");
        }
        for(n=m;n>=1;n--){

        printf("  *  ");
        }
        printf("\n");
        m=m-2;
      
    }
}
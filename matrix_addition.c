#include<stdio.h>
void main(){
    int num[3][3],i,j,arr[3][3],add[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("enter ur number");
    scanf("%d",&num[i][j]);
    }
   }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("%d",num[i][j]);
    printf("\t");
    }
    printf("\n");
  }
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("enter ur number");
    scanf("%d",&arr[i][j]);
    }
  }
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("%d",arr[i][j]);
    printf("\t");
    }
    printf("\n");
  }
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
   add[i][j]=arr[i][j]+num[i][j];
    }
  }
  printf("\tADDITION\n");
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("%d",add[i][j]);
    printf("\t");
    }
    printf("\n");
   }

}
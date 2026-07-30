#include<stdio.h>
void main(){
    char word[20], reverse[20];
    int length=0,i=0,j,flag=0;
     printf("enter ur word:");
     scanf("%s",word);
    while(word[i]!='\0'){
        length++;
        i++;
    }
    j=length-1;
    for(i=0;i<length;i++){
        reverse[i]=word[j];
        j--;
    }
    reverse[length]='\0';
    printf("the reverse of the word:");
   for(i=0;i<length;i++){
        printf("%c",reverse[i]) ;
    }
}
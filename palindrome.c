#include<stdio.h>
#include<string.h>
void main(){
    int length,i,j;
  char word[10],rev[10];
  printf("enter ur word:");
  scanf("%s",word);
  length=strlen(word);
  j=length-1;
  for(i=0;i<length;i++){
      rev[i]=word[j];
      j--;
  }
  rev[length]='\0';
  if(strcmp(rev,word)==0){
        printf("it is a palindrome");
    }else{
        printf("not a palindrome");
    }

}
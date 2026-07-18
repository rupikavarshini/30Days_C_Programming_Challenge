#include<stdio.h>
void main(){
    char name[10];
    int age;
    double num;
    float percent;
    printf("hello world\n");
    printf("enter your name\n");
    scanf("%s",name);
    printf("enter ur age\n"); 
    scanf("%d",&age);
    printf("enter ur percentage\n");
    scanf("%f",&percent);
    printf("enter the value of pi \n");
    scanf("%Lf",&num);
    printf("%s\n",name);
    printf("%d\n",age);
    printf("%f\n",percent);
    printf("%Lf\n",num);
}
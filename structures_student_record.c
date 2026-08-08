#include<stdio.h>
struct student{
    char name[10];
    int age;
    int total;
};
void main(){
    struct student s[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter ur name:");
        scanf("%s",s[i].name);
        printf("enter ur age:");
        scanf("%d",&s[i].age);
        printf("enter ur total:");
        scanf("%d",&s[i].total);
    }
    for(i=0;i<5;i++){
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].age);
        printf("%d\n",s[i].total);
    }


}
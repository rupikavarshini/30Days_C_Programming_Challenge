#include<stdio.h>
void main(){
    int choice;
    float output,num1,num2; 
    printf("   calculator  ");
    printf("enter ur first number:\n");
    scanf("%f",&num1);
    printf("enter ur second number:\n");
    scanf("%f",&num2);
    printf("\n1.add\n2.sub\n3.div\n4.mutiply\n");
    printf("enter ur choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
         output=num1+num2;
         printf("output:%f",output);
         break;
          case 2:
                output=num1-num2;
                printf("output:%f",output);
                break;
               case 3:
                 output=num1/num2;
                 printf("output:%f",output);
                 break;
                     case 4:
                        output=num1*num2;
                        printf("output:%f",output);
                        break;
                           default:
                              printf("invalid choice");
        
    }
}

#include<stdio.h>
int main()
{
 int num;
 float des;
 double avg;
 char name;
 printf("Enter a number ");
 scanf("%d",&num);
 printf("Enter a decimal number ");
 scanf("%f",&des);
 printf("Enter an another decimal number ");
 scanf("%lf",&avg);
 printf("Enter your name ");
 scanf("%s",&name);
 printf("%d \n",num);
 printf("%f \n",des);
 printf("%f \n",avg);
 printf("%c \n",name);
return(0);
}


#include<stdio.h>
int main()
{
 int byear,age;
 char name[15];
 printf("Enter your name ");
 scanf("%s",&name);
 printf("Input your birth year ");
 scanf("%d",&byear);
 age=2023-byear;
 printf("Your name is %s \n",name);
 printf("your age is %d \n",age);
return(0);
}

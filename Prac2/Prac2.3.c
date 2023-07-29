
#include<stdio.h>
int main()
{
 float time,dis,spd;
 printf("Input travelled distance(m)= ");
 scanf("%f",&dis);
 printf("TIme spent(s)= ");
 scanf("%f",&time);
 spd=dis/time;
 printf("Your average speed is= %f ",spd);
return(0);
}

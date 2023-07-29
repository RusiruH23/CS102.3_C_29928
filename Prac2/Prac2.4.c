
#include<stdio.h>
int main()
{
 int fahr,celsius;
 printf("Input Fahrenheit value = ");
 scanf("%d",&fahr);
 celsius=5 * (fahr-32) / 9;
 printf("Celsius value is = %d",celsius);
return(0);
}

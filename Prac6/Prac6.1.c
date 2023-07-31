#include<stdio.h>
int main()
{
    int arr[10];
    int max,min,i,sum;
    float avg;
    //declare array
    for(i=0;i<10;i++)
    {
        printf("Input a value to element %d =",i+1);
        scanf("%d",&arr[i]);
    }
    //find the minimum value
    for(i=0;i<10;i++)
    {
        min=arr[0];
        if(min>arr[i])
            min=arr[i];
    }
    //find the maximum value

    for(i=0;i<10;i++)
    {
        max=arr[0];
        if(max<arr[i])
            max=arr[i];
    }
    //find the average

    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10;


    //outputs
    printf("\n\n");
    printf("Minimum value is %d\n\n",min);
    printf("Maximum value is %d\n\n",max);
    printf("Average value is %.2f\n\n",avg);

    //reverse the array
    printf("Declared array in opposite direction.\n\n");
    for(i=9;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return(0);
}

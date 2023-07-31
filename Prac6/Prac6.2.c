#include<stdio.h>
int main()
{
    int size;
    //declare the size of array by user

    printf("Input size of arrays = ");
    scanf("%d",&size);
    printf("\n\n");

    int arr1[size],arr2[size],vectorsum[size],i,scalersum1,scalersum2;

    //first array
    printf("Input values to the first array.\n ");
    for(i=0;i<size;i++)
    {
        printf("Input a value to the element %d   ",i+1);
        scanf("%d",&arr1[i]);
        scalersum1+=arr1[i];
    }
    printf("\n\n");

    //second array
    printf("Input values to the second array.\n ");
    for(i=0;i<size;i++)
    {
        printf("Input a value to the element %d   ",i+1);
        scanf("%d",&arr2[i]);
        scalersum2+=arr2[i];
    }
    printf("\n\n");
    //scaler sum
    printf("scaler sum of array 1 is  %d\n",scalersum1);
    printf("scaler sum of array 2 is  %d\n",scalersum2);

    printf("\n\n");
    //vector sum

    for(i=0;i<size;i++)
    {
        vectorsum[i]=arr1[i]+arr2[i];
           printf("%d\t",vectorsum[i]);
    }




    return(0);
}

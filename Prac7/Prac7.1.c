#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],r,c,sum[3][3];
    //input elements to array 1
    printf("Array 1\n\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Input element to row %d column %d =   ",r+1,c+1);
            scanf("%d",&arr1[r][c]);
        }
    }
    printf("\n\n\n");
        //input elements to array 2

     printf("Array 2\n\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Input element to row %d column %d =   ",r+1,c+1);
            scanf("%d",&arr2[r][c]);
        }
    }
    printf("\n\n");
    printf("Total\n\n");

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
           sum[r][c]=arr1[r][c]+arr2[r][c];
            printf("%d\t",sum[r][c]);

        }
        printf("\n");

    }




    return(0);
}

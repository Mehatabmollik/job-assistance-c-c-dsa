#include<stdio.h>
int main()
{
    int a[3][3]={1,2,5,4,5,6,7,8,9};
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                sum=a[i][j]+sum;
            }
        }
    }
    printf("Sum of left diagonal :%d ",sum);

    return 0;
}


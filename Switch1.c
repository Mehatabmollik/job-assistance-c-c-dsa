#include<stdio.h>
int main()

{
    int x;
    printf("Enter month no:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("January 31 days:\n");
                break;
        case 2:printf("February 28 days but exception in leap year:\n");
                break;
        case 3:printf("March 31 days:\n");
                break;
        case 4:printf("April 30 days:\n");
                break;
        case 5:printf("May 31 days:\n");
                break;
        case 6:printf("june 30 days:\n");
                break;
        case 7:printf("July 31 days:\n");
                break;
        case 8:printf("August 31 days:\n");
                break;
        case 9:printf("September 30 days:\n");
                break;
        case 10:printf("October 31 days:\n");
                break;
        case 11:printf("November 30 days:\n");
                break;
        case 12:printf("December 31 days:\n");
                break;
        default :printf("Give the correct month no");
    }
   return 0;
}

#include<stdio.h>
void print(int n)
{
    if(n==0)
        return;
    print(n-1);
    printf("%d ",n);
}
int main()
{
    print(10);
    return 0;
}

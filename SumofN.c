#include<stdio.h>
int main()
{

    int i,s=0,n;
    printf("Enter The N value :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum is 1st N =%d\n",s);
    return 0;
}

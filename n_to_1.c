#include<stdio.h>
int getnum(int n)
{
    if (n == 0)
        return n;
    else if(n>0)
        printf("%d\n",n);
    n-=1;
    getnum(n);
}
int main()
{
    int n;
    printf("Insert value : ");
    scanf("%d",&n);
    getnum(n);

    return 0;
}

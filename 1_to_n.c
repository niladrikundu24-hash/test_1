#include<stdio.h>
int getn (int n)
{
    int a;
    for ( a=1;a<=n;a++)
        printf("%d\n",a);
    a+=1;

}

int main()
{
    int n;
    printf("Insert the number : ");
    scanf("%d",&n);
    getn(n);
    return 0;
}

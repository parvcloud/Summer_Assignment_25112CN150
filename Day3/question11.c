#include<stdio.h>
int main()
{
    int a,b,g;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        g=b;
        b=a%b;
        a=g;
    }
    printf("GCD=%d",a);
    return 0;
}
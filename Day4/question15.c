#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;

    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
{
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
}
        if(sum==n)
        printf("armstrong number");
        else
        printf("not armstrong number");
        return 0;
}
#include<stdio.h>
int armstrong(int n)
{
    int sum=0,rem,temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==n)
    return 1;
    else
    return 0;
}

int main()
{
    int num;
    printf("enter a number");
    scanf ("%d",&num);

    if(armstrong(num))
    printf("armstrong number");
    else
    printf("not armstrong number");
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;;l++)
    {
        if(l%a==0&&l%b==0)
        {
            printf("LCM=%d",l);
            break;
        }
    }
    return 0;
}
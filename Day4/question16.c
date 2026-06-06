#include<stdio.h>
int main()
{
  int i,n,r,sum,start,end,temp;

    printf("enter start and end:");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
        printf("%d",i);
    }
        return 0;
    }
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        //print A to highest  character
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        //print highest-1 to A
        for(j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
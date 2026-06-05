 #include<stdio.h>
 int main()
 {
    int n,i,prime=1;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {
        prime=0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    printf("prime number");
    else
    printf("not prime number");
    return 0;
}

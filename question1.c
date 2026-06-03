#include<stdio.h>
int main(){
    int sum=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of n numbers:%d",sum);
    return 0;
}
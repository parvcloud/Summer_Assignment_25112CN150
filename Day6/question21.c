#include<stdio.h>
int main(){
    int n,a[20],i=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("binary number =");
    while(i>0){
        i--;
        printf("%d",a[i]);
    }
    return 0;
}
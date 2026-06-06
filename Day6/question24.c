#include <stdio.h>
int main(){
    int x,n,i,ans=1;
    printf("enter x and n: ");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++){
        ans=ans*x;
    }
    printf("answer=%d",ans);
    return 0;
}
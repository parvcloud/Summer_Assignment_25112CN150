#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j;

    printf("enter first string:");
    scanf("%s",str1);

    printf("enter second string:");
    scanf("%s",str2);

    printf("common characters are:");
    

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c",str2[j]);
                break;
            }
        }
    }
    return 0;
}

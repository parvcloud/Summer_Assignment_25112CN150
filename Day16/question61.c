#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, total, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d numbers:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number is = %d", missing);

    return 0;
}
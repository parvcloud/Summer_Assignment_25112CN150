#include <stdio.h>

int main()
{
    int a[10], n, i, item;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", item, count);

    return 0;
}
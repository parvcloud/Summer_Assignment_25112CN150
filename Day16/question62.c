#include <stdio.h>

int main()
{
    int n, i, j;
    int a[100];
    int maxFreq = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = a[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
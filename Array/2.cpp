#include <iostream>

int main()
{
    int max = -1, min = 9999;
    int n;
    printf("Enter the no of elements in Array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("Max: %d", max);
    printf("Min: %d", min);
    return 0;
}
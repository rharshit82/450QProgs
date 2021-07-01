#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int n, i;
    printf("Enter total no of elements in Array");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(&arr[i], &arr[n - i - 1]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

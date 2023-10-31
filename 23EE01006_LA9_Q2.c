#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter array a: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter array b: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i=0; i<n; i++)
    {
        swap(&a[i], &b[i]);
    }

    /*new arrays*/
    printf("New array a: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("New array b: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
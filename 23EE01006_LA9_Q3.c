#include<stdio.h>
int main()
{
    int a, n, i, mark=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element you have to search: ");
    scanf("%d", &a);
    int *pA = &a;
    for(i=0; i<n; i++)
    {
        if (arr[i] == *pA)
            printf("The element is present at %dth position.\n", i+1);
            mark = 1;            
    }
    if (mark==0)
        printf("Element not found.\n");
    return 0;
}
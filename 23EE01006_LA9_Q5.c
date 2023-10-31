#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *pS = &sum;
    for (i=0; i<n; i++)
    {
        *pS += arr[i];
    } 
    printf("The sum of all elements is %d.", sum);
    return 0;
}
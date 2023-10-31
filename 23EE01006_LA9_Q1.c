#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int m, n;
    printf("Enter two numbers m and n: ");
    scanf("%d%d", &m, &n);
    printf("Before swap, m=%d, n=%d. \n", m, n);
    swap(&m, &n);
    printf("After swap, m=%d, n=%d"., m, n);
    return 0;
}
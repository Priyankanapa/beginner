#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    if((n-a)*(n-b) <= 0)
    {
    printf("is in range ");
    } else
    {
    printf("is not in range");
    }
    return 0;
}

#include <stdio.h>
int main()
{
int k,n;
int i, num, sum = 0;
scanf("%d", &n);
scanf ("%d", &num);
for(k=1; k<=n; k++)
{
printf("%d ", k);
}  
for (i = 1; i <= num; i++)
{
sum = sum + i;
}
printf ("\n %d",sum);
return 0;
}

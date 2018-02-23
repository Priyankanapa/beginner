#include <stdio.h>
int main()
{
int n1, n2, i, j, num;
scanf("%d %d", &n1, &n2);
for(i=n1+1; i<n2; ++i)
{
num=0;
for(j=2; j<=i/2; ++j)
{
if(i%j==0)
{
num=1;
break;
}}
if(num==0)
printf("%d ",i);
}
return 0;
}

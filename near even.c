#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
for(i=n-1;i>=n-2;i--)
{
 if(i%2==0)
 printf("%d",i);
}
}

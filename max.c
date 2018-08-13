#include<stdio.h>
void main()
{
int a[20],i,max;
printf("enter number");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
max=a[1];
for(i=1;i<=10;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d",max);
}

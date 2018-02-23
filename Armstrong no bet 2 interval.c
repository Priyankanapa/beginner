#include<stdio.h>
int main()
{
int temp,arm=0,a,b,c,d,num; 
scanf("%d",&num);
temp=num;
while(temp>0)
{
a=temp%10;
temp=temp/10;
arm=arm+a*a*a;
}
if(arm==num)
{
printf("armstrong number");
}
else
{
printf("not armstrong number");
}
return 0;
}

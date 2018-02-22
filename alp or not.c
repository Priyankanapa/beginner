#include<stdio.h>
int main()
{
char a;
printf("enter a character:");
scanf("%c",&a);
if((a>='a' && a<='z') || (a>='A' && a<='Z'))
printf("%c alphabet",a);
else
printf("%c not alphabet",a)
return 0;
}

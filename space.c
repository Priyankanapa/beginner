#include<stdio.h>
#include<string.h>
int main(void)
{
char str[50];
int i=0, l, j;
gets(str);
l=strlen(str);
for(i=0; i<l; i++)
{
if(str[i]==' ')
{
for(j=i; j<l; j++)
{
str[j]=str[j+1];
}
l--;
}
}
printf("%d",l);
return 0;
}

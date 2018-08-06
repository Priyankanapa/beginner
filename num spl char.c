#include<stdio.h>
int main()
{
char str[20];
int len,sum=0,i;
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
    sum=sum+1;
  }
}
printf("%d",sum);
return 0;
}

#include <stdio.h>
#include <conio.h>
void main()
{
	char a[50];
	int len,i,word=1;
	clrscr();
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
{
if(a[i]!=' ' && a[i+1]==' ')
word=word+1;
}
printf("%d ",word);
getch();
}

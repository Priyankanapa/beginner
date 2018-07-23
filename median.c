#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("%d", a>b?  ( c>a? a : (b>c? b:c) )  :  ( c>b? b : (a>c? a:c) )  );
return 0;      	  
}

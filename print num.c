#include<stdio.h>
void main()
{
  int n,res=0,rem,remin;
   scanf("%d",&n);
while(n!=0)
{
  rem=n%10;
  res=res*10+rem;
  n=n/10;
}
while(res!=0)
{
  remin=res%10;
  printf("%d\t",remin);
  res=res/10;
  
}
}

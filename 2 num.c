#include<stdio.h>
int main()
{
int n1,n2,pro;
scanf("%d%d",&n1,&n2);
pro=n1*n2;
if(pro%2==0)
printf("even");
else
printf("odd");
return 0;
}

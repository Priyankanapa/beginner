#include <stdio.h>

int main()
{
   int a,b,temp;
   printf("enter a and b");
   scanf("%d%d",&a,&b);
   printf("before swapping ");
   printf("a=%d b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("after swapping ");
   printf("a=%d b=%d",a,b);

return 0;
}

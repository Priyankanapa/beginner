#include <stdio.h>
int main()
{
int N,C=0;
printf("Enter number\n");
scanf("%d", &N);
while(N > 0)
{
N= N / 10;
C = C+ 1;  
}
printf("%d",C);
return 0;
}

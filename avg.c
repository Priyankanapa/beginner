#include <stdio.h>
int main(void) 
{
	int n,sum=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	int avg=sum/n;
	printf("%d",avg);
	
	return 0;
}

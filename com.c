#include <stdio.h> 
int main()
{
	int i, n;
	int flag=0;
	scanf("%d", &n);
	for(i=2; i<=n/2; i++)
	{
		if( !(n%i) ) 
		{ 
		    flag=1; 
		    break; 
		}
	}
	if(flag)
	printf("yes");
	else 
	printf("no");
}

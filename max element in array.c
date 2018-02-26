#include <stdio.h>
int main()
{
int array[50], size, i, larg;
printf("Enter the size of the array:");
scanf("%d",&size);
printf("Enter %d elements of  the array:", size);
for (i = 0; i < size; i++)
scanf("%d",&array[i]);
larg = array[0];
for (i = 1; i < size; i++) 
{
if (larg < array[i])
larg = array[i];
}
printf("largest element present in the given array is : %d", larg);
return 0;
}

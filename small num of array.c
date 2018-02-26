
#include <stdio.h>
int main()
{
int array[50], size, i, small;
printf("Enter the size of the array: ");
scanf("%d", &size);
printf("Enter %d elements of  the array: ", size);
for (i = 0; i < size; i++)
scanf("%d", &array[i]);
small= array[0];
for (i = 0; i < size; i++) 
{
if (array[i]< small)
small= array[i];
}
printf("smallest element present in the given array is : %d", small);
return 0;
}

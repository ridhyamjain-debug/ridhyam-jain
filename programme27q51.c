#include <stdio.h>
int main()
{
int n, i;
int a[100];
int max, min;
printf("enter number of elements: ");
scanf("%d", &n);
printf("enter array elements: ");
for(int i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
max = min = a[0];
for(int  i=1; i<n; i++)
{
if( a[i]> max)
max= a[i];
if( a[i]< min)
min =a[i];
}
printf("max=%d, min=%d", max, min);
return 0;
}


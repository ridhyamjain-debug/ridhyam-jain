#include <stdio.h>
int main()
{
int n, i, sum=0;
int a[100];
printf("enter number of elements: ");
scanf("%d" , &n);
printf("enter array elements: ");
for(int i=0; i<n; i++)
{
scanf("%d", &a[i]);
sum= sum+a[i];
}
printf("sum =%d", sum);
return 0;
}


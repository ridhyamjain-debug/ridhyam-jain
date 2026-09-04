#include <stdio.h>
int main()
{
int i, j;
// upper part
for(int i=1; i<=5; i++)
{
for(int j=1; j<=i; j++)
{
printf("*");
}
printf("\n");
}
// lower part
for(int i=4; i>=1; i--)
{
for(int j=1; j<=i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}


#include <stdio.h>
int main()
{
int a,b,hcf;
scanf("%d %d", &a,&b);
while (a !=b)
{
if (a>b)
a=a-b;
else
b=b-a;
}
hcf=a;
printf("%d", hcf);
return 0;
}


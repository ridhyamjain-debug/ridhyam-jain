#include <stdio.h>
int main() {
int a[100], n, i, pos=0, neg=0, zero=0;
printf("enter number of elements: ");
scanf("%d", &n);
printf("enter elements: ");
for(i=0; i<n; i++) {
scanf("%d", &a[i]);
for(i=0; i<n; i++) {
if(a[i] > 0)
pos++;
else if(a[i] <0)
neg++;
else
zero++;
}
printf("positive = %d\n", pos);
printf("negative = %d\n", neg);
printf("zero = %d\n", zero);
return 0;
}


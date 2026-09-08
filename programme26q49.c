#include <stdio.h>
int n,i;
int arr[100];
printf("enter number of elements: ");
scanf("%d", &n);
printf("enter array elements :\n");
for(int i=0; i<n; i++) {
scanf("%d", &arr[i]);
}
printf("array elements are:\n");
for(int i=0; i<n; i++) {
printf("%d", arr[i]);
}
return 0;
}


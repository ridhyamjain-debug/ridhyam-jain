 #include <stdio.h>
int main () {
int n, first, last, digits = 1, temp, middle, result;
printf("enter a number: ");
scanf("%d" , &n);
last = n % 10;
temp= n;
while (temp >= 10) {
temp /= 10;
digits *= 10;
}
first = temp;
middle = (n % digits) / 10;
result = last * digits + middle * 10  +first;
printf("number after swapping =%d", result);
return 0;
}


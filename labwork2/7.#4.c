#include <stdio.h>

int main() {
int n, i,arr[n];
int sum=0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
for (i = 1; i <= n; i++) {
    sum=sum+arr[i-1];}
printf("The sum of element is: %d\n", sum);
return 0;
}


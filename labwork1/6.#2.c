#include<stdio.h>
int main()
{int num, rev=0, sum=0;
printf("Enter the number: ");
scanf("%d",&num);
while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + (num % 10);
        num /= 10;
        sum=+digit;
        }
printf("Reversed number: %d\n", rev);
printf("Sum of digits: %d\n", sum);
return 0;
}

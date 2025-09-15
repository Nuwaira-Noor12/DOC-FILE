#include<stdio.h>
int main()
{int num,rev=0,a;
printf("Enter the number: ");
scanf("%d",&num);
a=num;
while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;};
if (a==rev) {
        printf("%d is a palindrome.\n",a);}
else {
        printf("%d is not a palindrome.\n",a);
    }
return 0;
}

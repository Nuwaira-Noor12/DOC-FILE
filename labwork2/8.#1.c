#include <stdio.h>

int main() {
    int num, digit, result = 0, place = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        digit = (digit + 1) % 10;   // add 1, wrap around if > 9
        result = digit * place + result;
        place *= 10;
        num /= 10;
    }

    printf("New number: %d\n", result);
    return 0;
}

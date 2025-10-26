#include <stdio.h>
#define n 5
int main() {
    int i;
    int j,k;
    printf("Generating the desired pattern \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");}
        for (k =1; k <=i; k++) {
            printf("%d ", k);}
        printf("\n");}
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");}
        for (k = 1; k <= n - i; k++) {
            printf("%d ",k);}
        printf("\n");}
    return 0;
}

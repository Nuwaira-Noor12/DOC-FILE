#include <stdio.h>
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(){
    int n;
    printf("Enter the number for calculating factorial : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}

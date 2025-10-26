#include <stdio.h>
int isPrime(int n){
    if(n<=1)
        return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
           return 0;
    return 1;
}
int main(){
    int n;
    printf("Enter a number to check for prime.");
    scanf("%d",&n);
    if(isPrime(n))
        printf("The number is Prime");
    else
        printf("The number is Not Prime");
    return 0;
}

#include <stdio.h>
void fibonacci(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        if(i==1)
            printf("%d",a);
        else if(i==2)
            printf(" %d",b);
        else{
            c=a+b;
            printf(" %d",c);
            a=b;
            b=c; }
    }
}
int main(){
    int n;
    printf("Enter the number of terms of fibonacci series : ");
    scanf("%d",&n);
    printf("Fibonacci series of %d terms is :",n);
    fibonacci(n);
    return 0;
}

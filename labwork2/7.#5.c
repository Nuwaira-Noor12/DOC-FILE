#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char i=-1,input[50];   // buffer for user input
    int arr[1000];    // array to hold integers
    int count = 0;    // number of elements

    printf("Enter integers (type 'exit' to stop):\n");

    while (1) {
        scanf("%s",input);  // take input as string

        // check if user typed "exit"
        if (input=="exit") {
            break;
        }
        arr[count] = atoi(input);
        count++;
    }

    printf("\nTotal number of elements entered: %d\n", count);

    return 0;
}

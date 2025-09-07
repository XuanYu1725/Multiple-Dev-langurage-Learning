// read multiple console inputs and print the sum to the console
#include<stdio.h>

int main(){
    int sum = 0, num;
    printf("Enter numbers (space-separated): ");
    while(scanf("%d", &num) == 1){ // scanf returns the number of successfully read items
        sum = sum + num;

        if (getchar() == '\n') { // check newline for end of input
            break;
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}
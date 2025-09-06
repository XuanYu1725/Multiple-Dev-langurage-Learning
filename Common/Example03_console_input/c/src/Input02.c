// read 2 console inputs and print concatenated text to the console
#include<stdio.h>
#include<string.h>

int main(){
    char input1[50], input2[50], output[100];
    printf("Enter 2 text: ");
    scanf("%49s %49s", input1, input2);
    strcpy(output, input1); // copy first input to output
    strcat(output, input2); // concatenate second input to output
    printf("You entered: %s", output);
    return 0;
}
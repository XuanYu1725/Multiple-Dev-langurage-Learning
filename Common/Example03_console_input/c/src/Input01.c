// read console input and print it to the console
#include<stdio.h>

int main(){
    char input[100];
    printf("Enter some text: ");
    scanf("%99s", input);
    printf("You entered: %s", input);
    return 0;
}
// read all characters from a single line of console input and print them to the console
#include<stdio.h>

int main(){
    char buffer[256];
    printf("Enter a line of text: ");
    fgets(buffer, sizeof(buffer), stdin); // read a line of text
    printf("You entered: %s", buffer);
    return 0;
}
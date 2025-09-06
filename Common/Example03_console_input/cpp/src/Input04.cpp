// read all characters from a single line of console input and print them to the console
#include<iostream>
#include<string>

using namespace std;

int main(){
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input); // read a line of text
    cout << "You entered: " << input << endl;
    return 0;
}
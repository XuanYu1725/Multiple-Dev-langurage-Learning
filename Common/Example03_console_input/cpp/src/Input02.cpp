// read 2 console inputs and print concatenated text to the console
#include<iostream>

using namespace std;

int main(){
    string input1, input2, output;
    cout << "Enter 2 text: ";
    cin >> input1 >> input2;
    output = input1 + input2; // concatenate inputs
    cout << "You entered: " << output << endl;
    return 0;
}
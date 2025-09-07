// read multiple console inputs and print the sum to the console
#include<iostream>

using namespace std;

int main(){
    int sum = 0, num;
    cout << "Enter numbers (space-separated): ";
    while(cin >> num){ // cin returns the stream, which is evaluated as true if the read was successful
        sum = sum + num;

        if (cin.peek() == '\n') { // check newline for end of input
            break;
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
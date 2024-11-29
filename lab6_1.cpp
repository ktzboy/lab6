#include<iostream>
using namespace std;

int main(){
    int input, even = 0, odd = 0;
    cout << "Enter an integer: ";
    cin >> input;

    while(input != 0) {
        if(input % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> input;
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
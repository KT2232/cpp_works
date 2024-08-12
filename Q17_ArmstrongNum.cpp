#include <iostream>
using namespace std;

int main() {
    int n, num, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> n;
    num = n;

    while (num != 0) {
        // remainder contains the last digit
        remainder = num % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        num /= 10;
    }

    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Armstrong = 123 -- 1^3+2^3+3^3
    int n, l, d;
    
    cout << "Number: ";
    cin >> n;

    // Convert the number to a string to find its length
    string num_str = to_string(n);
    l = num_str.length();

    while (n > 0) {
        d = n % 10;
        cout << pow(d, l) << " ";
        n /= 10;
    }

    return 0;
}

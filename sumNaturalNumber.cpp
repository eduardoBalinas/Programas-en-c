#include <iostream>

using namespace std;

void sumNumber(int n);

int main() {

    int n;
    cout << "Give me a number pls :)";
    cin >> n;

    sumNumber(n);

    return 0;
}

void sumNumber(int n) {
    int sum;
    sum = n * (n + 1) / 2;
    cout << sum;    
}
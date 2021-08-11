#include <iostream>
#include <math.h>

using namespace std;

void squareRoot(int a , int b, int c);

int main() {

    int a , b ,c;
    cout<< "Give me the number of a";
    cin >> a;

    cout<< "Give me the number of b";
    cin >> b;
    cout<< "Give me the number of c";
    cin >> c;

    squareRoot(a,b,c);


    return 0;
}

void squareRoot(int a , int b, int c) {

    float r1;
    float r2;

    r1 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
    r2 = -b - sqrt(b * b - 4 * a * c) / 2 * a;

    cout << "The first square Root is : " << r1 << endl;
    cout << "The second square Root is : " << r2 << endl;

}
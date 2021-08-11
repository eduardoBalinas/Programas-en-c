#include <iostream>
#include <math.h>

using namespace std;

void distance(int,int,int,int);

int main() {

    int a , b, c, d;

    cout << "ingresa x1 x2 y1 y2";

    cin >> a >> b >> c >> d;

    distance(a ,b ,c ,d);

    return 0;
}

void distance(int a, int b, int c, int d) {

    float distance;

    distance = sqrt(((b - a) * (b - a)) - ((d - c) * (d - c)));

    cout << distance << endl;

}
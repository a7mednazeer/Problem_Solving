#include <iostream>
using namespace std;

int main() {
    long long s, g, a, b;
    cin>> s >> g;

    a = g;
    b = s - a;
    if (a % g != 0 || b % g != 0 || a <= 0 || b <= 0 ) {
        cout<< -1;
    }
    else {
        cout<< a <<" "<< b;
    }
}


#include <iostream>
using namespace std;

int main() {
    int x, n=0;
    cin >> x;
    while (x > 0) {
        n += x % 2;
        x /= 2;
    }
    cout<< n <<'\n';
}


#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n >= 0) {
        count++;
        n -= (count * count - count) / 2;
    }

    cout<< count - 2 <<'\n';
}

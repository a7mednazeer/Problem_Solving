#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
     while (t--) {
        long long x,y;
	cin >>x>>y;
        long long res = x - y;
        (res == 1 ) ? cout << "NO\n" : cout << "YES\n";
     }
}

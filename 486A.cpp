#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,res;
	cin >> n;
	(n%2==0) ? res = n/2 : res = -((n+1) / 2);
    cout<< res <<'\n';
}

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	short n, a, b, res;
	cin>> n;
 
	short * arr = new short[n];
 
	for (int i = 0; i < n-1; i++) {
	    cin>> arr[i];
	}
	cin>> a >> b;
 
	for (int i = a-1; i < b-1; i++) {
		res += arr[i];
	}
	cout<< res <<'\n';
        delete [] arr;
}

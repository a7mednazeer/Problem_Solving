#include <bits/stdc++.h>
using namespace std;

int main() {
    short t, n, k, sum;
    cin>> t;

    while (t--) {
	cin>> n >> k;
        sum = 0;
	
	short * a = new short[n];
	for (short i = 0; i < n; i++) {
	    cin>> a[i];
	}
    
	short * b = new short[n];
        for (short i = 0; i < n; i++) {
	    cin>> b[i];
        }

	sort(a , a+n);
  	sort(b , b+n);

	for (short i = 0; i < k; i++) {
  	    if (a[i] <= b[n-i-1]) {
	        swap(a[i] , b[n-i-1]);
	    }
	}	

	for (short i = 0; i < n; i++) {
	    sum += a[i];
	}
	cout<< sum <<'\n';
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	short n, k, count;
	cin>> n >> k;

	short * arr = new short[n];

	for (short i = 0; i < n; i++) {
		cin>> arr[i];
	}
	
	for (short i = 0; i < n; i++) {
		if(arr[i] >= arr[k-1] && arr[i] > 0) {
			count++;
	    }
    }
	cout<< count << '\n';
	delete [] arr;
}

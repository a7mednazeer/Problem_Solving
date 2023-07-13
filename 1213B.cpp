#include <bits/stdc++.h>
using namespace std;

int main() {
	short t;
	cin>> t;
	while(t--) {
		int n;
		cin>> n;

		int * arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin>> arr[i];
		}

		int minPrice = arr[n-1];
		int count = 0;

		for (int i = n-1; i >= 0; i--) {
			if(arr[i] > minPrice) {
				count++;
			}
			else {
				minPrice = arr[i];
			}
		}
		cout<< count <<'\n';
	}
}


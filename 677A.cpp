// 677A. Vanya and Fence
#include<iostream>
using namespace std;

main() {
	int i,n,h,a[1000],n2;
	cin>>n>>h;
	n2 = n;
	for(i = 0; i < n; i++) {
		cin>>a[i];
	}
	for(i = 0; i < n; i++) {
	    if(a[i] > h) {
	    	n2++;
	    }
	}
	cout<<n2;
}


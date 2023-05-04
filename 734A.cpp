// 734A. Anton and Danik
#include<iostream>
using namespace std;

main() {
	int n, A = 0, D = 0;
	char c;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> c;
		if(c == 'A') {
			A++;
		}
		else {
			D++;
		}
	}
	if (A > D) {
		cout << "Anton";
	}
	else if (D > A) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}
}


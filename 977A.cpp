#include<iostream>
using namespace std;
 
int main() {
	long long n;
	short k;
	cin>> n >> k;
 
	for (short i = 0; i < k; i++) {
		if (n % 10 == 0) {
			n /= 10;
		}
		else {
			n-=1;
		}
	}
	cout<< n <<'\n';
}

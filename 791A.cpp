// 791A. Bear and Big Brother
#include<iostream>
using namespace std;

main() {
	int a, b, years = 0;
	cin >> a >> b;
	for(int i = 0; i < 100; i++) {
	    if(a < b || a == b) {
	        a *= 3;
	        b *= 2;
	        years++;
	    }
	}
	cout << years;	
}


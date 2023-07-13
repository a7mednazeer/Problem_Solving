#include<iostream>
using namespace std;
 
int main() {
	short a, b, count = 0;
	cin>> a >> b;
	for(short i = 0; i < 10; i++) {
	    if(a < b || a == b) {
	        a *= 3;
	        b *= 2;
	        count++;
	    }
	}
	cout<< count <<'\n';
}

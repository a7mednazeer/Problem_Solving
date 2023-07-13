#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
    
	for (int i = 0; i < s.length(); i+=2) {
	    for (int j = 0; j < s.length()-1; j+=2) {
	    	if(s[j+2]<=s[j]) {
	    		swap(s[j],s[j+2]);
	    	}
	    }
	}
	cout<< s <<'\n';
}

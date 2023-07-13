#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t,tt;
	getline(cin,s);
	getline(cin,t);
	
    for (int i = t.length() - 1; i >= 0; i--) {
        tt += t[i]; 
    }
    
    (s == tt) ? cout<<"YES\n" : cout << "NO\n";
}

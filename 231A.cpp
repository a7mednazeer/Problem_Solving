// 231A. Team
#include<iostream>
using namespace std;

main() {
	int count, solve = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int  Petya, Vasya, Tonya;
		cin >>  Petya >> Vasya >> Tonya;
		if( Petya == 1 && Vasya == 1 && Tonya == 1 || Petya == 1 && Tonya == 1 || Petya == 1 && Vasya == 1 || Vasya == 1 && Tonya == 1) {
			solve++;
		}
	}
	cout << solve;
}



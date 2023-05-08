#include <iostream>
using namespace std;
 
main() {
    int t; cin>>t;
    while(t--)
    {
        int num;
	cin >> num;
 
        if (1900 <= num)
			cout << "Division 1" << '\n';
		else if (1600 <= num && num <= 1899)
			cout << "Division 2" << '\n';
		else if(1400 <= num && num <= 1599)
			cout << "Division 3" << '\n';
		else if(num <= 1399)
			cout << "Division 4" << '\n';
	}
}

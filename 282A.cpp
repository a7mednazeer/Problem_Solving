#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;    
    int x = 0;
     while (t--) {
        string str;
	cin >> str;
        ((str == "x++" || str == "++x") ? x++ : x--);
     }
     cout << x << '\n';
}

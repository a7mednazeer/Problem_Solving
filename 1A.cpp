#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
  
    long long length = n/a;
    if(n % a != 0)
        length++;

    long long width = m/a;
    if(m % a != 0)
        width++;

     cout << length*width << '\n';
}


#include <iostream>
using namespace std;

int arr[1000*1000];

main() {
    long long n; 
    cin >> n;
    long long ans = 1, res = 0;
    for (int i = 0; i < n; i++)
            cin >> arr[i];
    for (int i = 0; i < n; i++) {
            ((arr[i + 1] > arr[i]) ? ans++ : ans = 1);
            res = max(res, ans);
    }
    cout << res;
}

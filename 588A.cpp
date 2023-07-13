#include<iostream>
using namespace std;

int main() {
    int n, res=0;
    cin>> n;
    int * a = new int[n];
    int * p = new int[n];
    for(int i=0 ;i < n ;i++) {
        cin>> a[i] >> p[i];
    }
    for(int i=0 ;i < n ;i++) {
        if (p[i] < p[i+1]) {
            p[i+1] = p[i];
        }
    }
    for(int i=0 ;i < n ;i++) {
        res += a[i]*p[i];
    }
    cout<< res <<'\n';
}

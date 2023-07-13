#include<iostream>
using namespace std;

int main() {
    short int a, b, c;
    int max = 0;
    
    cin >> a >> b >> c;

    int res1 = a+b*c;
    int res2 = a*b+c;
    int res3 = (a+b)*c;
    int res4 = a*(b+c);
    int res5 = a+b+c;
    int res6 = a*b*c;

    max = res6;

    if(res5 >= max) {
        max = res5;
    }
    if(res4 >= max) {
        max = res4;
    }
    if(res3 >= max) {
        max = res3;
    }
    if(res2 >= max) {
        max = res2;
    }
    if(res1 >= max) {
        max = res1;
    }

    cout<< max <<'\n';
}

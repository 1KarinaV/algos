#include <iostream>
using namespace std;

int main() {
    int a;
    short b, c, d;
    long int k;
    cin >> a >> b >> c >> d >> k;
    int count = 0;
    if (b == 1 && c == 0) {
        cout << a;
        return 0;
    }
    if (a*b-c==1){
        a=1;
        cout << a;
        return 0;
    }
    if (a*b-c==a){
        cout << a;
        return 0;
    }
        for (int i = 0; i < k; i++) {
            a = a * b - c;
            if (a <= 0) {
                a = 0;
                break;}
            if (a > d) {
                a = d;
                count++;
                if (count > 2) {
                    break; }
            }
        }
        cout << a;
    }

#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int Q,B500,B200,B100,B50,B20,M10,M5,M2,M1;

int main(){
    FastIO;

    cin >> Q;

    B500 =  Q / 500;
    Q    =  Q % 500;
    B200 =  Q / 200;
    Q    =  Q % 200;
    B100 =  Q / 100;
    Q    =  Q % 100;
    B50  =  Q / 50;
    Q    =  Q % 50;
    B20  =  Q / 20;
    Q    =  Q % 20;
    M10  =  Q / 10;
    Q    =  Q % 10;
    M5   =  Q / 5;
    Q    =  Q % 5;
    M2   =  Q / 2;
    Q    =  Q % 2;
    M1   =  Q;

    cout << "De 500 hay " << B500 << '\n';
    cout << "De 200 hay " << B200 << '\n';
    cout << "De 100 hay " << B100 << '\n';
    cout << "De 50 hay " << B50 << '\n';
    cout << "De 20 hay " << B20 << '\n';
    cout << "De 10 hay " << M10 << '\n';
    cout << "De 5 hay " << M5 << '\n';
    cout << "De 2 hay " << M2 << '\n';
    cout << "De 1 hay " << M1 << '\n';
    
    return 0;
}

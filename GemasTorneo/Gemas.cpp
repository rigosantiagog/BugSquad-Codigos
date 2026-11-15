#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int G,J,M,ans;

int main(){
    FastIO;

    cin >> G >> M >> J;

    //M = M + ((G - M) % ( J + 1 ));

    //M = M + ((G - M) % ( J++ ));
    M += ((G - M) % ( ++J ));

    ans = M;

    cout << ans;

    return 0;
}
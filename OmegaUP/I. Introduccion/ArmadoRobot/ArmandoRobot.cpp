#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int C,R,S,B,ans;

int main(){
    FastIO;
    
    cin >> C >> R >> S >> B;
    
    ans  = C * R * S * B;
    
    cout << ans;
    
    return 0;
}
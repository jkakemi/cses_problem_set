#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 1e9+7;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    long long resp=1;
    long long base=2;
    while(n > 0){
        if(n%2) resp = (resp*base)%MOD;
        base = (base*base)%MOD;
        n /= 2;
    }

    cout << resp << endl;

    return 0;
}
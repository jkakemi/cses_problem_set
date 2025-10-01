#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    ll total = 1 << n;

    for(int i=0; i<total; i++){
        int gray = i ^ (i >> 1);
        for(int j=n-1; j>=0; j--){
            cout << ((gray >> j) & 1);
        }
        cout << endl;
    }

    return 0;
}
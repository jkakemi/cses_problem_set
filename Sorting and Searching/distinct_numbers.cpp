#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    set<ll> a;

    for(int i=0; i<n; i++){
        ll x; cin >> x;
        a.insert(x);
    }

    cout << a.size() << endl;

    return 0;
}
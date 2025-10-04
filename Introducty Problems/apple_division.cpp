#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<ll> a(n);
    ll total = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        total += a[i];
    } 

    ll minDiff = LLONG_MAX;

    for(int mask=0; mask < (1 << n); mask++){
        ll sum = 0;
        for(int i=0; i<n; i++){
            if(mask & (1 << i)) sum += a[i];
        }
        ll diff = abs(total-2*sum);
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;


    return 0;
}


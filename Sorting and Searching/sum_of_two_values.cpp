#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(ll* arr, ll n, ll x){
    map<ll, ll> freq;
    bool flag = true;

    for(int i=0; i<n; i++){
        if(flag){
            if(freq.find(x-arr[i]) != freq.end()){
                cout << (*(freq.find(x-arr[i]))).second << " " << i+1;
                flag = false;
            }
            freq[arr[i]] = i+1;
        }
    }

    if(flag) cout << "IMPOSSIBLE\n";
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, x; cin >> n >> x;
    ll a[n];

    for(int i=0; i<n; i++) cin >> a[i];

    solve(a, n, x);

    return 0;
}
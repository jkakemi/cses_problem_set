#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll maxSubarraySum(vector<ll>& a){
    ll res = a[0];
    ll maxEnding = a[0];

    for(int i=1; i<a.size(); i++){
        maxEnding = max(a[i], maxEnding+a[i]);
        res = max(res, maxEnding);
    }

    return res;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];

    cout << maxSubarraySum(a) << endl;

    return 0;
}
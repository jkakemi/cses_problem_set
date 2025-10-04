#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    while(n--){
        ll a, b; cin >> a >> b;

        if((2*a-b)%3 || (2*a-b) < 0 || (2*b-a)%3 || (2*b-a) < 0) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
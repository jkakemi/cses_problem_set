#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    while(n--){
        ll x, y; cin >> x >> y;
        // 2 < 3
        if(x > y){
            ll resp = (x-1)*(x-1);
            ll add = 0;

            if(x%2 != 0) add = y;
            else add = 2*x-y;

            cout << resp+add << endl;
        }
        // 3-1*3-1 = 4
        // 2*3-2 = 4 4+4 == 0
        else{
            ll resp = (y-1)*(y-1);
            ll add = 0;

            if(y%2 == 0) add = x;
            else add = 2*y-x;

            cout << resp+add << endl;
        }

    }

    return 0;
}
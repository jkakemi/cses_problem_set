#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long long n; cin >> n;
    vector<unsigned long long> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    unsigned long long cont=0;
    unsigned long long diff=0;
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            diff = a[i-1]-a[i];
            a[i] += diff;
            cont += diff;
        }
    }

    cout << cont << endl;

    return 0;
}

// 3 2 5 1 7
// 3 +1 5 1 7
// 3 3 5 +4 7
// 5

// 5 1 3 5 8
// 5 +4 = 5 +2 = 5
 
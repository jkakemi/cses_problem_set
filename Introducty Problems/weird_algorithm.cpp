#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int n; cin >> n;

    bool flag = true;
    bool first = true;

    cout << n << " ";
    while(flag){
        if(!first){
            cout << " ";
        }
        if(n == 1){
            flag = false;
            break;
        }
        if(n%2 == 0){
            n = n/2;
            cout << n;
        }
        else if(n%2 != 0){
            n = (n*3)+1;
            cout << n;
        }
        first = false;
    }

    cout << endl;

    return 0;
}
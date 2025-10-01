#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void lcs(const vector<int> &s1, const vector<int> &s2){
    int m = s1.size();
    int n = s2.size();

    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << dp[m][n] << endl;

    // backtracking
    vector<int> final_lcs;
    int i=m, j=n;
    while(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1]){
            final_lcs.push_back(s1[i-1]);
            i--; j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }

    reverse(final_lcs.begin(), final_lcs.end());

    bool first = false;
    for(int f : final_lcs){
        if(first) cout << " ";
        cout << f;
        first = true;
    }

    cout << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;

    vector<int> s1;
    vector<int> s2;

    for(int i=0; i<a; i++){
        int x; cin >> x;
        s1.push_back(x);
    }

    for(int i=0; i<b; i++){
        int x; cin >> x;
        s2.push_back(x);
    }

    lcs(s1, s2);

    return 0;
}
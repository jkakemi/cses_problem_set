#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    
    sort(s.begin(), s.end());

    vector<string> permutations;
    do{
        permutations.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout << permutations.size() << endl;

    for(auto& p : permutations){
        cout << p << endl;
    }

    return 0;
}
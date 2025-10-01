#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    ll len = s.size();

    map<char, int> freq;

    for(char c : s){
        freq[c]++;
    }

    int impar=0;
    char imparChar='\0';
    for(auto& f : freq){
        if(f.second%2 != 0){
            impar++;
            imparChar = f.first;
        } 
    }

    if(impar > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }

    string aux = "";
    for(auto& f : freq){
        aux.append(f.second/2, f.first);
    }

    string resp = aux;
    reverse(resp.begin(), resp.end());

    if(imparChar != '\0'){
        cout << aux + string(1, imparChar) + resp;
    }
    else{
        cout << aux+resp << endl;
    }

    return 0;
}
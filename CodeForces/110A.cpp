#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    ll n;
    cin >> n;
    int contador = 0;

    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '7' || s[i] == '4'){
            contador++;
        }
    }
    if(contador == 4 || contador == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    string a, b;

    cin >> a;
    cin >> b;

    for(int i = 0; i < a.length(); i++){
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < b.length(); i++){
        b[i] = tolower(b[i]);
    }

    if(a < b){
        cout << -1 << endl;
    }else if(a > b){
        cout << 1 << endl;
    }else if(a == b){
        cout << 0 << endl;
    }

    return 0;
}
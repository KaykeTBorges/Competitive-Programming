#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    ll k, n, w;
    cin >> k >> n >> w;
    ll soma = 0, aws = 0;

    for(int i = 1; i <= w; i++){
        soma += i * k;
    }
    aws = soma - n;
    if(aws < 0){
        cout << 0 << endl;
        return 0;
    }
    cout << aws << endl;

    return 0;
}
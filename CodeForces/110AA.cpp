#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    ll n;
    cin >> n;
    int a, contador = 0;

    while(n){
        a = n % 10;
        if(a == 4 || a == 7){
            contador++;
        }
        n /= 10;
    }
    if(contador == 4 || contador == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
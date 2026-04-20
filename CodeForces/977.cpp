#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;

    while(k--){
        int modulo = n % 10;
        if(modulo == 0){
            n = n / 10;
        }else{
            n = n - 1;
        }
    }
    cout << n << endl;

    return 0;
}
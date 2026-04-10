#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    int contador = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        contador++;
    }

    cout << contador << endl;

    return 0;
}
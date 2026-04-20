#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int n; 
    cin >> n;
    int x, y, z;
    int somax = 0, somay = 0, somaz = 0;

    while(n--){
        cin >> x >> y >> z;
        somax += x;
        somay += y;
        somaz += z;
    }
    if(somax == 0 && somay == 0 && somaz == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
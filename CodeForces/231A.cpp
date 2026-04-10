#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    int t;
    cin >> t;
    
    int count;
    int a, b, c;

    while(t--){
        cin >> a >> b >> c;
        if(a){
            if(b) count++;
            else if(c) count++;
        }else if(b){
            if(c) count++;
        }
    }
    cout << count << endl;

    return 0;
}
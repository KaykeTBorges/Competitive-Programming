#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int t;
    cin >> t;
    string palavra;

    while(t--){
        cin >> palavra;
        
        if(palavra.size() > 10){
            cout << palavra[0] << palavra.size() - 2 << palavra[palavra.size() - 1] << endl;
        }else{
            cout << palavra << endl;
        }
    }

    return 0;
}
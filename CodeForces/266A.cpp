#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int t;
    string s;
    cin >> t;
    cin >> s;

    int aws = 0;

    for(int i = 0; i < (t-1); i++){
        if(s[i] == s[i+1]){
            aws++;
        }
    }
    cout << aws << endl;

    return 0;
}
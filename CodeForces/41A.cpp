#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    string s, t;
    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());
    if(s == t){
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}
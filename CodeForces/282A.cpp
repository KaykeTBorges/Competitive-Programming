#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    int t;
    cin >> t;
    string op;
    int aws = 0;

    while(t--){
        cin >> op;
        if(op[1] == '+'){
            aws++;
        }else{
            aws--;
        }
    }
    cout << aws << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int n, h;
    cin >> n >> h;
    
    int aws = 0;

    while(n--){
        int temp;
        cin >> temp;
        if(temp <= h){
            aws++;
        }else{
            aws += 2;
        }
    }

    cout << aws << endl;

    return 0;
}
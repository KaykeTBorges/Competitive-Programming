#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    int x, aws;
    cin >> x;

    if(x % 5 == 0){
        aws = x / 5;
    }else{
        aws = (x / 5) + 1;
    }

    cout << aws << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    vector<int> v;
    int n, k, temp;
    int aws = 0;

    cin >> n >> k;
    

    while(n--){
        cin >> temp;
        v.push_back(temp);
    }
    k = v[k-1];
    for(int i; i < v.size(); i++){
        if(v[i] > 0 && v[i] >= k){
            aws++;
        }
    }



    cout << aws << endl;


    return 0;
}
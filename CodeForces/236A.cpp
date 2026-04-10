#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    set<char> set;
    string a;

    cin >> a;

    for(char c : a){
        set.insert(c);
    }

    int temp = set.size();
    if(temp % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }


    return 0;
}
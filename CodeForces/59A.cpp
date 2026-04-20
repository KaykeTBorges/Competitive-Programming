#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    string s;
    int cMaisculo = 0, cMinusculo = 0;

    cin >> s;
    int t = s.size();

    for(int i = 0; i < t; i++){
        if(s[i] <= 90){
            cMaisculo++;
        }else{
            cMinusculo++;
        }
    }

    if(cMaisculo > cMinusculo){
        for(char &c : s){
            c = toupper(c);
        }
    }else{
        for(char &c : s){
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
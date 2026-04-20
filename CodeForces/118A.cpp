#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    string s;
    string aws = "";
    cin >> s;

    for(char c : s){
        char minusculo = tolower(c);

        if(minusculo == 'a' || minusculo == 'e' || minusculo == 'i' || minusculo == 'o' || minusculo == 'u' ||
        minusculo == 'y'){
            continue;
        }else{
            aws += '.';
            aws += minusculo;
        }
    }
    cout << aws << endl;


    return 0;
}
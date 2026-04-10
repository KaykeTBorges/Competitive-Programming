#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    string a;
    cin >> a;
    int num1 = 0, num2 = 0, num3 = 0;

    for(char c : a){
        if(c == '1') num1++;
        else if(c == '2') num2++;
        else if(c == '3') num3++;
    }

    bool primeiro = true; // Marca se é o primeiro número que estamos imprimindo

    // 2. Impressão dos 1s
    for(int i = 0; i < num1; i++) {
        if(!primeiro) cout << "+";
        cout << "1";
        primeiro = false;
    }

    // 3. Impressão dos 2s
    for(int i = 0; i < num2; i++) {
        if(!primeiro) cout << "+";
        cout << "2";
        primeiro = false;
    }

    // 4. Impressão dos 3s
    for(int i = 0; i < num3; i++) {
        if(!primeiro) cout << "+";
        cout << "3";
        primeiro = false;
    }

    cout << endl;

    return 0;
}
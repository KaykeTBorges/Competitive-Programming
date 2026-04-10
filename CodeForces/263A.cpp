#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;

    int m[5][5];
    int aws = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> m[i][j];
            if(m[i][j] == 1){
                if(i > 2){
                    aws += i - 2;
                }else{
                    aws += 2 - i;
                }
                if(j > 2){
                    aws += j - 2;
                }else{
                    aws += 2 - j;
                }
            }
        }
    }
    cout << aws << endl;



    return 0;
}
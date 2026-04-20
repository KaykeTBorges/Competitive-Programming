    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

    typedef long long ll;

    int main() {
        fastio;
        int n;
        int ant = 0, dan = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == 'A'){
                ant++;
            }else{
                dan++;
            }
        }
        if(ant > dan){
            cout << "Anton" << endl;
        }else if(ant < dan){
            cout << "Danik" << endl;
        }else{
            cout << "Friendship" << endl;
        }


        return 0;
    }
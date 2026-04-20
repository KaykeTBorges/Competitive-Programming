    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

    int main() {
        fastio;

        string s;
        cin >> s;

        int count = 1; 
        bool perigoso = false;

        for (size_t i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) { 
                count++;
            } else {
                count = 1;
            }

            if (count >= 7) {
                perigoso = true;
                break; 
            }
        }

        if (perigoso) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        return 0;
    }
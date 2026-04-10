#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    fastio;
    double m, n, a;
    int aws;

    cin >> m >> n >> a;
    aws = ceil(m / a) * ceil(n / a);

    cout << (int)aws << endl;

    return 0;
}
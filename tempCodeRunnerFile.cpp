#include <bits/stdc++.h>
using namespace std;

// Function to compute gcd
long long gcd_ll(long long a, long long b) {
    if (b == 0) return a;
    return gcd_ll(b, a % b);
}

long long solve() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = -1;

    // Try all x from 2 to 100 (that’s enough for this problem)
    // because one of them will always work within small range
    for (long long x = 2; x <= 100; x++) {
        bool found = false;
        for (long long num : a) {
            if (gcd_ll(num, x) == 1) {
                ans = x;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<long long>vec;
    while (t--) {
        vec.push_back(solve());
    }
    for(long long val: vec)
    {
        cout<<val<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

//  Write your logic here
pair<int, vector<int>> solve(int a, int b) {
    pair<int, vector<int>> result;

    int x = a ^ b;

    if (a == b) {
        // already equal
        result.first = 0;
        result.second = {};
    }
    else if (x <= a) {
        // can make equal in one step
        result.first = 1;
        result.second = {x};
    }
    else {
        // need 2 steps if x > a
        int big = (1 << 30); // large number (can be any big power of 2)
        result.first = 2;
        result.second = {big, big ^ x};
    }

    return result;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        auto ans = solve(a, b);

        if (ans.first == -1) {
            cout << -1 << "\n";
        } else {
            cout << ans.first << "\n";
            for (int x : ans.second)
                cout << x << " ";
            if (!ans.second.empty()) cout << "\n";
        }
    }

    return 0;
}

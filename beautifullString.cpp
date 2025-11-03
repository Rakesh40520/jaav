#include <bits/stdc++.h>
using namespace std;

// Function where you will implement your solution
pair<int, vector<int>> solve(int n, string s) {
    int k = 0;
    vector<int> indices;
    
    // TODO: Replace this with actual problem logic
    // Current logic: count '0's and return their indices
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            k++;
            indices.push_back(i + 1); // 1-based indexing
        }
    }
    
    // If no zeros found, return -1
    
    
    return {k, indices};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        auto result = solve(n, s);
        
        if (result.first == -1) {
            cout << -1 << "\n";
        } else {
            cout << result.first << "\n";
            for (int i = 0; i < result.second.size(); i++) {
                cout << result.second[i];
                if (i != result.second.size() - 1) cout << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
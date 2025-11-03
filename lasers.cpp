#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

void func(vector<int>& result, const vector<int>& a, const vector<int>& b, int xf, int yf) {
    int sum = 0;
    for (int val : a) if (val < xf) sum++;
    for (int val : b) if (val < yf) sum++;
    result.push_back(sum);
}

int main() {
    int t;
    cin >> t;
    vector<int> result;

    while (t--) {
        int xf, yf, n, m;
        cin >> n >> m >> xf >> yf;
        cin.ignore(); // skip newline

        vector<int> a, b;
        string line;
        int num;

        // Read first vector
        getline(cin, line);
        stringstream ss1(line);
        while (ss1 >> num) a.push_back(num);

        // Read second vector
        getline(cin, line);
        stringstream ss2(line);
        while (ss2 >> num) b.push_back(num);

        func(result, a, b, xf, yf);
    }

    // Print results
    for (int x : result) cout << x << endl;

    return 0;
}

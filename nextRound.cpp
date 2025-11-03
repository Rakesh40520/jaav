#include <iostream>
#include <vector>
using namespace std;

void func(int k, vector<int> &res) {
    int numbers = 0;
    for (int i = 0; i < res.size(); i++) {
        if (res[i] >= res[k - 1] && res[i] > 0) {
            numbers++;
        }
    }
    cout << numbers << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        cin >> res[i];
    }
    func(k, res);
}

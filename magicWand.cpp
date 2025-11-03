#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> func(vector<int> vec)
{
    bool isEven = false;
    int count = 0;
    for (int num : vec)
    {
        if (num % 2 == 0)
        {
            count++;
        }
    }

    if (count == vec.size() || count == 0) return vec;    
    sort(vec.begin(), vec.end());

    return vec;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    vector<vector<int>> ans;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;

        for (int i = 0; i < n; i++)
        {
            int sub;
            cin >> sub;
            vec.push_back(sub);
        }

        ans.push_back(func(vec));
    }

    for (const auto &val : ans)
    {
        for (int x : val)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

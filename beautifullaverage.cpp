#include <iostream>
using namespace std;
#include <vector>
int func(vector<int>&a)
{
    int max = 0;
    for(int val:a)
    {
        if(max < val)   max = val;
    }
    return max;
}
int main()
{
    
    ios::sync_with_stdio(false);
    vector<int> a,ans;
    int t;
    cin>>t;
    int n,var;
    while(t > 0)
    {
        cin>>n;
        while(n > 0)
        {
            cin>>var;
            a.emplace_back(var);
            n--;
        }
        ans.push_back(func(a));
        a.clear();
        t--;
    }
    for(int i : ans)
    {
        cout<<i<<endl;
    }
}
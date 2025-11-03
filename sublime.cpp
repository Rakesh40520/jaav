#include <iostream>
#include <vector>
using namespace std;

int ans(int n,int x)
{
    if(n % 2==0)    return 0;
    return x;
}

int main()
{
    int t,n,x;
    cin>>t;
    vector<int> result;
    while(t)
    {
        cin>>x>>n;
        result.push_back(ans(n,x));
        t--;

    }
    int i = 0;
    while( i < result.size() )
    {
        cout<<result[i]<<endl;
        i++;
    }
    

}
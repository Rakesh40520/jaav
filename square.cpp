#include <iostream>
#include<vector>
using namespace std;
bool ans(int a,int b,int c,int d)
{
    if(a==b && b==c && c==d)
        return true;
    else return false;
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    int a,b,c,d;
    vector<bool> vec; 
    while(t > 0)
    {
        cin>>a>>b>>c>>d;
        vec.push_back(ans(a,b,c,d));
        t--;
    }

    for(bool val: vec)
    {
        if(val == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
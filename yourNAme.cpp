#include <iostream>
#include<vector>
using namespace std;
bool ans(int a,string anagram,string name)
{
    vector<int> freq(256, 0);
    vector<int> Afreq(256, 0);

    int i = 0;
    while(i < anagram.size())
    {
        Afreq[anagram[i]]++;
        i++;
    }
    i = 0;
    while(i < name.size() )
    {
        freq[name[i]]++;
        i++;
    }
    if(freq==Afreq) return true;
    return false;


}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    int s;
    string name;
    string anagram;
    vector<bool> vec;
    while(t > 0)
    {
        cin>>s;
        cin>>anagram;
        cin>>name;
        vec.push_back(ans(s,anagram,name));

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
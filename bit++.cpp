#include <iostream>
#include <string>
#include <vector>
using namespace std;
int calc(std::string q)
{
    int x = 0,i = 0;
    string sub;
    if(q[i] == 'X')
    {
        sub = q.substr(1);
        if(!sub.compare("++"))  x = x + 1;
        else x--;
        return x;
    }

    else
    {
        sub = q.substr(0,2);
        if(!sub.compare("++"))  x = x + 1;
        else x--;
        return x;
    }
        
    
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    std::string q;
    vector<int> result;
    int x = 0;
    while(t)
    {
        std::getline(cin,q);
        x = x + calc(q);
        t--;
    }
    std::cout<<x;
}
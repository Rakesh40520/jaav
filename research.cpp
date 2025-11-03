#include <iostream>
#include<vector>

void answer(std::vector<int>&r,int k,int x)
{

    if(k == 1 && x %2 !=0)
    {
        r.push_back(x*2);
        return;
    }
    int dup =k;
    while(k > 1)
    {
        
        x = x*2;
        k--;
    }

    if(((x-1)%3) == 0 ) x = (x-1)/3;
    else x = x*2;
    
    r.push_back(x);
}
int main()
{
    int n;
    std::cin>>n;
    
    int k,x;
    int i = 0;
    std::vector<int> result;
    while(i < n)
    {   
        std::cin>>k;
        std::cin>>x;
        answer(result,k,x);

        i++;
    }
    i = 0;
    while(i< result.size())
    {
        std::cout<<result[i]<<std::endl;
        i++;
    }

}

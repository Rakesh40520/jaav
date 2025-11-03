#include <iostream>
bool watermelon(int weight)
{
    if (weight % 2 == 0 && weight > 2) return true;
    return false;

    
    
    
}


int main()
{
    int weight;
    std::cin>>weight;
    if(watermelon(weight))  std::cout<<"Yes";
    else std::cout<<"No";
    
}
#include <iostream>
#include <vector>
int input();
std::string func(std::string var);

int main()
{
    int x = input();
    std::vector<std::string> array[x];
    for(int i  = 0 ; i < x; i++)
    {
        std::cin>>array[i];
        array[i] = func(array[i]);
    }


}

int input()
{
    int x;
    std::cin>>x;

    return x;
}


#include <iostream>
#include <vector>
#include <string>

std::string func(std::string word)
{
    if (word.length() <= 10)
        return word;

    return std::string(1, word[0]) + std::to_string(word.length() - 2) + std::string(1, word[word.length() - 1]);
}

int main()
{
    int inputCount;
    std::cin >> inputCount;

    std::vector<std::string> array(inputCount);
    std::vector<std::string> ans(inputCount);

    for (int i = 0; i < inputCount; ++i)
    {
        std::cin >> array[i];
        ans[i] = func(array[i]);
    }

    for (int i = 0; i < inputCount; ++i)
    {
        std::cout << ans[i] << std::endl;
    }

    return 0;
}

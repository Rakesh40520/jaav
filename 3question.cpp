#include <iostream>
typedef struct questions{
    int q1,q2,q3;
 } Q;
int main()
{
    int numberOfQuestions;
    std::cin>>numberOfQuestions;
    Q array[numberOfQuestions];
    int i = 0;
    while(i<numberOfQuestions)
    {
        std::cin>>array[i].q1;
        std::cin>>array[i].q2;
        std::cin>>array[i].q3;
        i++;

    }
    int count = 0 ;
     i = 0;
    while(i<numberOfQuestions)
    {
        if((array[i].q1&&array[i].q2) || (array[i].q1&&array[i].q3)  || (array[i].q3&&array[i].q2) )
            count++;
        i++;
        
    }
    std::cout<<count;
}
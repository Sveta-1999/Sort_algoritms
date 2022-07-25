#include "utility.h"
#include <vector>

void bubble_sort(std::vector<int>& vec)
{
    for(int i = 0; i < vec.size()-1; ++i )
    {
        bool swapped = false;
        for(int j = 0; j < vec.size()-1-i; ++j)
        {
            if(vec[j] > vec[j+1])
            {
                swap(vec[j],vec[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

int main() {
    std::vector<int> vec;
    int number;
    for(int i = 0; i < 10; ++i)
    {
        std::cin>>number;
        vec.push_back(number);
    }
    bubble_sort(vec);
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout<<vec[i];
    }
}

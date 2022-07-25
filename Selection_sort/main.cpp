#include <vector>

#include "utility.h"

void selection_sort(std::vector<int>& vec)
{
    
    for ( int i = 0; i < vec.size() - 1; ++i )
    {
        int min_index = i;
        for ( int j = i + 1 ; j < vec.size(); ++j )
        {
            if ( vec[min_index] > vec[j] )
            {
                min_index = j;
            }
        }
        swap( vec[min_index], vec[i] );
    }
}


int main()
{
    std::vector<int> vec;
    int number;
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> number;
        vec.push_back(number);
    }
    selection_sort(vec);
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << "  ";
    }
    return 0 ;
}


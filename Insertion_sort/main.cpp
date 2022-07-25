#include <iostream>
#include <vector>

/*void insertion_sort(std::vector<int> vec)
{
    int value; 
    for (int i = 1; i < vec.size(); i++)
    { 
        value = vec[i]; 
        int j = i - 1; 
        while (j >= 0 && vec[j] > value)
        { 
            vec[j + 1] = vec[j]; 
            j = j - 1; 
        } 
        vec[j + 1] = value; 
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
    insertion_sort(vec);
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout<<vec[i];
    }
}*/

template <typename T>
void insertion_sort(std::vector<T>& vec)
{
    int key;
    int i;
    for(int j = 1; j < vec.size(); ++i)
    {
        key = vec[j];
        i = j - 1;
        while(i >= 0 && vec[i] > key)
        {
            vec[i + 1] = vec[i];
            i--;
        }
        vec[i+1] = key;
    }
}

int main() {
    std::vector<int> vec {7,4,9,45,5,8,0,1,3,81,10};
    insertion_sort(vec);
    for(int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << "  " ;
    }
    return 0;
}

#include <iostream>
#include <vector>

template <typename T>
void merge(std::vector<T>& vec, int first, int mid, int last)
{
    std::vector<T> tmp(vec.size());
    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;
    int index = first1;
    while (first1 <= last1 && first2 <= last2)
    {
        if(vec[first1] < vec[first2])
        {
            tmp[index++] = vec[first1++];
        }
        else
        {
            tmp[index++] = vec[first2++];
        }
    }
    while(first1 <= last1)
    {
        tmp[index++] = vec[first1++];
    }
    while(first2 <= last2)
    {
        tmp[index++] = vec[first2++];
    }
    for(int i = first; i <= last; ++i)
    {
        vec[i] = tmp[i];
    }
}

template <typename T>
void merge_sort(std::vector<T>& vec, int first, int last)
{
    if(first < last)
    {
        int mid = first + (last - first) / 2;
        merge_sort(vec, first, mid);
        merge_sort(vec, mid + 1, last);
        merge(vec, first, mid, last);
    }
}

int main() {
    std::vector<int> vec;
    int number;
    for(int i = 0; i < 5; ++i)
    {
        std::cin >> number;
        vec.push_back(number);
    }
    int first = 0;
    int last = vec.size() - 1;
    merge_sort(vec, first, last);
    for(int i = 0; i < 5; ++i)
    {
        std::cout << vec[i] << "  " ;
    }
}
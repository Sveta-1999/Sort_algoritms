#include <iostream>

template<typename T>
void swap(T& value1, T& value2)
{
    T value3 = value1;
    value1 = value2;
    value2 = value3;

}
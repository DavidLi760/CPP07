#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void iter(T* array, size_t length, Func func)
{
    if (!array || !func) return;
    for (int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

#endif
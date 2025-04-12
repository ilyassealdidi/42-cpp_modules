#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, size_t size, void (*f)(T&)){
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template<typename T>
void iter(const T* array, size_t length, void (*f)(const T&))
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

#endif
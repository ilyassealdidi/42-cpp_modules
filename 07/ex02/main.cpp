#include "Array.hpp"
#include <iostream>

int	main(){
    try
    {
        Array<int> arr(8);
    
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = i * 2;
        }
        std::cout << "Array elements:" << std::endl;
        for (int i = 0; i < arr.size(); i++) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }
        std::cout << std::endl;
        Array<int> arr2(arr);
        std::cout << "Copy of Array elements:" << std::endl;
        for (int i = 0; i < arr2.size(); i++) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }
        std::cout << std::endl;
        Array<int> arr3;
        arr3 = arr;
        std::cout << "Assignment of Array elements:" << std::endl;
        for (int i = 0; i < arr3.size(); i++) {
            std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Trying to access out of bounds index:" << std::endl;
        try {
            std::cout << arr[10] << std::endl;
        } catch (std::out_of_range &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Trying to access negative index:" << std::endl;
        try {
            std::cout << arr[-1] << std::endl;
        } catch (std::out_of_range &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Trying to access empty array:" << std::endl;
        Array<int> emptyArr;
        try {
            std::cout << emptyArr[0] << std::endl;
        } catch (std::out_of_range &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
        std::cout << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << "Error : "<< e.what () << std::endl ;
    }
    return (0);
}
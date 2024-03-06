#include "../include/binary_search.hpp"
#include <iostream>
int main()
{
    std::vector<int> arr = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int index = binary_search(arr, 3);
    if(index != -1)
        std::cout << "Found value = " << arr[index] << " at index = " << index << std::endl;
    else
        std::cout << "Value not in list." << std::endl;
}
#pragma once
#include <vector>

template <typename T>
int binary_search(std::vector<T> list, T item)    
{
   int low = 0;
   int high = list.size() - 1;
   T guess;
   while(low <= high)
   {
        int mid = (low + high) / 2;
        guess = list[mid];
        if(guess == item)
        {
            return mid;
        }
        else if (guess > item)
        {
            high = mid - 1;
        }
        else if (guess < item)
        {
            low = mid + 1;
        } 
   }
   return -1;
}
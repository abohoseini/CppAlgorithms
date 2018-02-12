// Binary search is a search algorithm that finds the position of a target value within a sorted array.
// Binary search compares the target value to the middle element of the array; if they are unequal, 
// the half in which the target cannot lie is eliminated and the search continues on the remaining half
// until it is successful.If the search ends with the remaining half being empty, the target is not in the array.
// Binary search runs in at worst logarithmic time, making O(log n) comparisons,
// where n is the number of elements in the array.

#include "Algorithms.h"

using namespace std;

template<typename T>
int binarySearch(vector<T> &vec, T x, int begin, int end)
{
    int mid = begin + (end - begin) / 2;

    if (end >= begin)
    {
        if (vec[mid] == x)
        {
            return mid;
        }

        if (vec[mid] < x)
        {
            return binarySearch(vec, x, mid + 1, end);
        }

        return binarySearch(vec, x, begin, mid - 1);
    }

    return -1;
}

template<typename T>
int Algorithms::BinarySearch(vector<T> &vec, T x)
{
    return binarySearch(vec, x, 0, vec.size() - 1);
}

// Explicit template instantiation
template int Algorithms::BinarySearch<int>(vector<int> &, int);
template int Algorithms::BinarySearch<char>(vector<char> &, char);


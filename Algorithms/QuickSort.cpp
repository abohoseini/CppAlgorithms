// Quicksort (sometimes called partition-exchange sort) is an efficient sorting algorithm,
// serving as a systematic method for placing the elements of an array in order.
// Mathematical analysis of quicksort shows that, on average, the algorithm takes O(n log n)
// comparisons to sort n items. In the worst case, it makes O(n2) comparisons, though this 
// behavior is rare. 
// Quicksort is a divide and conquer algorithm. Quicksort first divides a large array into
// two smaller sub-arrays: the low elements and the high elements. Quicksort can then 
// recursively sort the sub-arrays. The steps are :
// 1. Pick an element, called a pivot, from the array.
// 2. Partitioning : reorder the array so that all elements with values less than the 
// pivot come before the pivot, while all elements with values greater than the pivot come 
// after it(equal values can go either way).After this partitioning, the pivot is in its 
// final position.This is called the partition operation.
// 3. Recursively apply the above steps to the sub - array of elements with smaller values
// and separately to the sub - array of elements with greater values.
// always choosing the last element in the partition as the pivot in this way results in 
// poor performance (O(n²)) on already sorted arrays, or arrays of identical elements.


#include "Algorithms.h"
#include "Utils.h"

using namespace std;

template <typename T>
int partition(vector<T> &vec, int begin, int end)
{
    int pivot = end;
    int index = begin;

    while (index < pivot)
    {
        if (vec[index] <= vec[pivot])
        {
            index++;
        }
        else
        {
            Utils::Swap(vec[index], vec[pivot - 1]);
            Utils::Swap(vec[pivot - 1], vec[pivot]);
            pivot--;
        }
    }
    return pivot;
}

template <typename T>
void quickSort(vector<T> &vec, int begin, int end)
{
    if (begin < end)
    {
        int pivot = partition(vec, begin, end);
        quickSort(vec, begin, pivot - 1);
        quickSort(vec, pivot + 1, end);
    }
}

template <typename T>
void Algorithms::QuickSort(vector<T> &vec)
{
    quickSort(vec, 0, (int)vec.size() - 1);
}

// Explicit template instantiation
template void Algorithms::QuickSort<int>(vector<int> &);
template void Algorithms::QuickSort<char>(vector<char> &);
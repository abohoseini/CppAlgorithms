
// Selection sort is a sorting algorithm, specifically an in-place comparison sort.
// It has O(n2) time complexity, making it inefficient on large lists,
// and generally performs worse than the similar insertion sort.
// Selection sort is noted for its simplicity.

#include "Algorithms.h"
#include "Utils.h"

using namespace std;

template <typename T>
void Algorithms::SelectionSort(vector<T> &vec)
{
    // Could do vec.size()-1 because single element is also min element.
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            Utils::Swap(vec[i], vec[minIndex]);
        }
    }
}

// Explicit template instantiation
template void Algorithms::SelectionSort<int>(vector<int> &);
template void Algorithms::SelectionSort<char>(vector<char> &);
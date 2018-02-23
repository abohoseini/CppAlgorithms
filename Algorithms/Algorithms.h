#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>

class Algorithms
{
  public:
  template <typename T>
  static void SelectionSort(std::vector<T>& vec);
  template <typename T>
  static void QuickSort(std::vector<T>& vec);
  template <typename T>
  static int BinarySearchRec(std::vector<T>& vec, T x);
  template <typename T>
  static int BinarySearch(std::vector<T>& vec, T x);
};

#endif // ALGORITHMS_H
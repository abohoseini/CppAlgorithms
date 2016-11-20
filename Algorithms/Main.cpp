
#include <iostream>
#include <vector>
#include "Utils.h"
#include "Algorithms.h"
#include "stdafx.h"
using namespace std;

int main()
{
    static int testArray[] = {2, 74, 87, 25, 0, 12, 1, 1, 5, 8};
    vector<int> testVector(testArray, testArray + sizeof(testArray) / sizeof(testArray[0]));

    Utils::PrintVector<int>(testVector);
    Algorithms::SelectionSort<int>(testVector);
    Utils::PrintVector<int>(testVector);

    return 0;
}

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

    static char testCharArray[] = {'a', 'z', 'd', 'z', 'd', 'a', 'f', 'c', '7', 'x'};
    vector<char> testCharVector(testCharArray, testCharArray + sizeof(testCharArray) / sizeof(testCharArray[0]));

    Utils::PrintVector<int>(testVector);
    //Algorithms::SelectionSort<int>(testVector);
    Algorithms::QuickSort<int>(testVector);
    Utils::PrintVector<int>(testVector);
    cout << "Location of 8 is: " << Algorithms::BinarySearchRec(testVector, 8) << endl;
    
    Utils::PrintVector<char>(testCharVector);
    //Algorithms::SelectionSort<char>(testCharVector);
    Algorithms::QuickSort<char>(testCharVector);
    Utils::PrintVector<char>(testCharVector);
    cout << "Location of 'd' is: " << Algorithms::BinarySearchRec(testCharVector, 'd') << endl;

    int i;
    cin >> i ;
    return 0;
}
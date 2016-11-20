
#include "Utils.h"
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void Utils::PrintVector(vector<T> vect)
{
    for (auto item : vect)
    {
        cout << item << ' ';
    }
        cout << endl ;
}

// Explicit template instantiation
template void Utils::PrintVector<int>(vector<int>);
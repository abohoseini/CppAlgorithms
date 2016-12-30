
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
    cout << endl;
}

template <typename T>
void Utils::Swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

// Explicit template instantiation
template void Utils::PrintVector<int>(vector<int>);
template void Utils::PrintVector<char>(vector<char>);
template void Utils::Swap<int>(int &, int &);
template void Utils::Swap<char>(char &, char &);

#include "Utils.h"
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void Utils::printVector(vector<T> vect){

for (auto item : vect) 
    {
        cout << item << ' '; 
    }    
}


// Explicit template instantiation
template void Utils::printVector<int>(vector<int>);
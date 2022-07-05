#include <iostream>
#include <string>
#include <chrono>
#include <boost/range/algorithm.hpp>
#include <boost/range/algorithm_ext.hpp>
#include <boost/range/irange.hpp>
#include <bits/stdc++.h>

template < typename T > std::vector<T> shuffle( std::vector<T> &vector) 
{
    int L{static_cast<int>(vector.size())};
    std::vector<int> charord;
    std::vector<T> src(L);

    for (int i = 0; i < L; i++)
        charord.push_back(i);

    std::mt19937 generator( std::chrono::system_clock::now().time_since_epoch().count() );
    std::shuffle(charord.begin(), charord.end(), generator);

    int k = 0;
    for (int i : charord)
    {
        src[k] = vector[i];

        k++;
    }

    return src;
}

int main(){
    // std::vector<int> numbers{0,1,2,3,4,5};
    // std::vector<std::string> numbers{"hello","world","my name"};

    std::vector<int> v;
    boost::push_back(v, boost::irange(0, 10));

    std::vector<int> numbers = shuffle(v);

    for (int i=0; i < numbers.size();i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
}
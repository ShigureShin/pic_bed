#include <iostream>
#include <vector>

#define NDEBUG

using namespace std;
using Iter = vector<int>::const_iterator;

void printVec(Iter begin, Iter end);

int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};
    printVec(vec.begin(), vec.end());

    return 0;
}

void printVec(Iter begin, Iter end)
{
#ifndef NDEBUG
    cout << "vector elements remain: " << end - begin << endl;
#endif
    if(begin == end)
    {
        return ;
    }
    cout << *begin << endl;
    printVec(++begin, end);
}

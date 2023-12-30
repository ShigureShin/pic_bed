#include <iostream>
#include <vector>

using namespace std;

using Iter = vector<int>::const_iterator;

void print_vector(Iter begin, Iter end)
{
    if(begin == end)
    {
        cout << endl;
        cout << "Print vector finished!" << endl;
        return ;
    }
    cout << *begin << " ";
    print_vector(++begin, end);
}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};

    print_vector(vec.begin(), vec.end());

    return 0;
}
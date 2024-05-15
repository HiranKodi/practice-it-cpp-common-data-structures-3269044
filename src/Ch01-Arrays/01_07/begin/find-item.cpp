#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    if (size == 0)
        return -1;
    else
    {
        for (size_t i = 0; i < size; i++)
        {   if(arr[i] == target)
                return i;
        }
        return -1;
    }
}

int main()
{
    return 0;
}

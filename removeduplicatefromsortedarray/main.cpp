#include <iostream>
#include <vector>

using std::vector;

int removeDuplicatesFromSortedArray(std::vector<int> v)
{
    int i = 0;
    for (size_t j = 1; j < v.size(); j++)
    {
        if (v[j] != v[j - 1])
        {
            v[i] = v[j];
            i += 1;
        }
    }
    return i;
}

int main()
{
    vector<int> vec{1, 2, 3, 3, 3, 4};
    int k = removeDuplicatesFromSortedArray(vec);

    for (int i = 0; i < k; i++)
    {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
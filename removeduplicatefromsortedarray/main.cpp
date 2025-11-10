#include <iostream>
#include <vector>

using std::vector;

int removeDuplicatesFromSortedArray(std::vector<int> &v)
{
    int k = 1;
    for (size_t j = 1; j < v.size(); j++) // 1, 1, 2
    {
        if (v[j] != v[j - 1])
        {
            v[k] = v[j];
            k = k + 1;
        }
    }
    return k;
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

    vector<int> vec2{1, 1, 2};
    int s = removeDuplicatesFromSortedArray(vec2);

    for (int i = 0; i < s; i++)
    {
        std::cout << vec2[i] << " ";
    }

    std::cout << std::endl;

    vector<int> vec3{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int t = removeDuplicatesFromSortedArray(vec3);

    for (int i = 0; i < t; i++)
    {
        std::cout << vec3[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
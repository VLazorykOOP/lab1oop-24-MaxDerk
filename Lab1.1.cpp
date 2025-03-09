#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int N;
    std::cout << "Array size (N): ";
    std::cin >> N;
    std::vector<int> A(N);
    std::cout << "Array elements: ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }
    int maxNeg = std::numeric_limits<int>::min();
    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0 && A[i] > maxNeg)
        {
            maxNeg = A[i];
            index = i;
        }
    }
    if (index != -1)
    {
        std::cout << "Max negative element: " << maxNeg << " with an index " << index << std::endl;
    } 
    else
    {
        std::cout << "No negative elements in the array" << std::endl;
    }
    return 0;
}
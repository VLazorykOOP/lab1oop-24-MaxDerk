#include <iostream>
#include <limits>
int main()
{
    int N, B, A1;
    std::cout << "Array size (N): ";
    std::cin >> N;
    int A[N];
    std::cout << "Array elements: ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }
    std::cout << "Input B: ";
    std::cin >> B;
    std::cout << "Input A1: ";
    std::cin >> A1;
    int minValue = std::numeric_limits<int>::max();
    for (int i = 0; i < N; i++)
    {
        if (A[i] > A1) break;
        if (A[i] < B && A[i] < minValue)
        {
            minValue = A[i];
        }
    }
    if (minValue != std::numeric_limits<int>::max())
    {
        std::cout << "Minimal element smaller than B located before A1: " << minValue << std::endl;
    } else
    {
        std::cout << "No answer found" << std::endl;
    }
    return 0;
}
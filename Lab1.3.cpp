#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double r;
    int n;
    cout << "Input r: ";
    cin >> r;
    cout << "Input n <= 200: ";
    cin >> n;
    double A[2 * n];
    cout << "Input coordinates (a1, a2), (a3, a4), ..., (a2n-1, a2n):\n";
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        double x = A[2 * i];
        double y = A[2 * i + 1];
        if (x * x + y * y <= r * r)
        {
            count++;
        }
    }
    cout << "Points located in a circle: " << count << endl;
    return 0;
}

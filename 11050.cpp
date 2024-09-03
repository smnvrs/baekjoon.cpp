#include <iostream>

using namespace std;

int choose(int n, int k)
{
    int prod = 1;
    int div = 1;
    while(k)
    {
        prod *= n;
        div *= k;
        k--;
        n--;
    }
    return prod / div;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << choose(n, k);

    return 0;
}


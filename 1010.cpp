#include <iostream>

using namespace std;

long choose(int n, int k)
{
    if(k > n / 2) 
        k = n - k;
    long prod = 1;
    long div = 1;
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
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        cout << choose(m, n) << '\n';
    }

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_div = 1000001, max_div = 0;
    while(n--)
    {
        int val;
        cin >> val;

        min_div = min(min_div, val);
        max_div = max(max_div, val);
    }

    cout << min_div * max_div;

    return 0;
}

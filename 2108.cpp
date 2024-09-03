#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    v.reserve(n);

    while(n--)
    {
        int i; 
        cin >> i;
        v.push_back(i);
    }

    sort(v.begin(), v.end());

    int most_frequent = v.back();
    int max_frequency = 1;
    int tie = -4001;
    for(int i = v.size() - 1; i >= 0; --i)
    {
        int current_frequency = 1;
        while(i - 1 >= 0 && v[i] == v[i-1])
        {
            ++current_frequency;
            --i;
        }

        if (current_frequency > max_frequency)
        {
            max_frequency = current_frequency;
            most_frequent = v[i];
            tie = -4001;
        }
        else if (current_frequency == max_frequency)
        {
            tie = most_frequent;
            most_frequent = v[i];
        }
    }
    
    cout << int(round(accumulate(v.begin(), v.end(), 0) / float(v.size()))) << '\n'; // i'm getting -0 when I don't cast to int... what?
    cout << v[v.size() / 2] << '\n';
    cout << (tie == -4001 ? most_frequent : tie) << '\n'; // most frequent
    cout << v.back() - v.front();
}
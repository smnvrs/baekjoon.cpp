#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    int count = 0;
    unordered_set<string> uset;

    cin >> n;
    cin.ignore(256, '\n');

    string trigger = "";

    for(int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);

        if(i == 0 || s == trigger)
        {
            trigger = s;
            uset.insert(s);
            uset.erase(uset.begin(), uset.end());
            continue;
        }

        if(uset.find(s) == uset.end())
        {
            uset.insert(s);
            count++;
            continue;
        }        
    }

    cout << count;

    return 0;
}
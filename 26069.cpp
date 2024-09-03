#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<string> infected;
    infected.insert("ChongChong");
    while(n--)
    {
        string name1, name2;
        cin >> name1 >> name2;
        if(infected.find(name1) != infected.end() || infected.find(name2) != infected.end())
        {
            infected.insert(name1);
            infected.insert(name2);
        }
    }

    cout << infected.size();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int> mp;
    mp.insert({"Mathew", 75});
    mp.insert({"Nathew", 65});
    mp.insert({"Oathew", 55});

    mp["kabir"] = 0;
    mp["sabir"] = 2;

    if (mp.count("Mathew"))
        cout << "Yes";

    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        cout << it->first << endl;
        cout << mp["Mathew"] << endl;
    }

    return 0;
}
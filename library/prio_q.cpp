#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    // the above one is for larger values

    // priority_queue<int, vector<int>, greater<int>> pq; 
    // this is for smaller values

    while (true)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        else if (cmd == 1)
        {
            pq.pop();
        }

        else if (cmd == 2)
        {
            cout << pq.top();
        }

        else
        {
            break;
        }
    }

    return 0;
}
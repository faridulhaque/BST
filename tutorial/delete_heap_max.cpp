#include <bits/stdc++.h>
using namespace std;

void insert_heap(int x, vector<int> &v)
{
    v.push_back(x);

    int cur_index = v.size() - 1;

    while (cur_index != 0)
    {
        int par_index = (cur_index - 1) / 2;
        if (v[par_index] < v[cur_index])
        {
            swap(v[par_index], v[cur_index]);
        }
        else
            break;
        cur_index = par_index;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;

    while (true)
    {
        int l = cur * 2 + 1;
        int r = cur * 2 + 2;
        int last = v.size() - 1;
        if (l <= last && r <= last)
        {
            if (v[l] >= v[r] && v[l] > v[cur])
            {
                swap(v[l], v[cur]);
                cur = l;
            }
            else if (v[r] >= v[l] && v[r] > v[cur])
            {
                swap(v[r], v[cur]);
                cur = r;
            }
            else
            {
                break;
            }
        }
        else if (l <= last)
        {
            if (v[l] > v[cur])
            {
                swap(v[l], v[cur]);
                cur = l;
            }
            else
            {
                break;
            }
        }
        else if (r <= last)
        {
            if (v[r] > v[cur])
            {
                swap(v[r], v[cur]);
                cur = r;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(x, v);
    }

    delete_heap(v);

    return 0;
}
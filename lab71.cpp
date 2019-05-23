#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    queue <int> top;
    vector <bool> vizit(n);
    vector<vector <int>> mat(n); 
    vector <int> rezult, way(n);
    bool is = false;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            mat[i].push_back(tmp);
        }
    }
    int first, last;
    cin >> first >> last;
    first--;
    last--;
    if (first == last)
    {
        cout << 0 << endl;
        return 0;
    }
    
    vizit[first] = true;
    way[first] = - 1;
    top.push(first);

    while (!top.empty())
    {
        int v = top.front();
        top.pop();
        for (int i = 0; i < mat[v].size(); i++)
        {
            if (mat[v][i] > 0 && !vizit[i] )
            {
                vizit[i] = true;
                top.push(i);
                way[i] = v;
                if(i == last)
                {
                    is = true;
                }   
            }
        }
        
    }
    if (!is)
    {
        cout << -1 << endl;
        return 0;
    }

    while (last != -1)
    {
        int tmp = way[last];
        rezult.push_back(last);
        last = tmp;
    }

    cout << rezult.size() - 1 << endl;
    for (int i = rezult.size() - 1; i > - 1; i--)
    {
        cout << rezult[i] + 1 << " ";
    }
    cout << endl;
};
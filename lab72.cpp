#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int counter = 0;
int const INF = 11111;
vector <int> top;
bool is_in_vector(int h)
{
    for (int i = 0; i < top.size(); i++)
    {
        if(top[i] == h)
        {
            return false;
        }
    }
    top. push_back(h);
    return true;
}

int dfs(int v, int z, vector<vector <int>> &mas)
{
    for (int i = 0; i < z; i++)
    {
        if (mas[v][i] == INF && i == top.front())
        {
            return 0;
        }
        if (mas[v][i] == 1 && is_in_vector(i))
        {
            counter++;
            mas[v][i] = INF;
            dfs(i, z, mas);
        }
    }
    return 0;  
}

int main(void)
{
    int n, s;
    cin >> n >> s;
    s--;
    top.push_back(s);
   vector<vector<int>> arr(n) ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { 
           
            int tmp;
            cin >> tmp;
            arr[i].push_back(tmp);
        } 
    }
    dfs(s, n, arr);
    cout << counter + 1 <<endl;
};
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void QuickSort(vector<int> &a, int first, int last)
{
    int left = first;
    int right = last;
    int random = rand() % (last - first + 1) + first;
    int v = a[random];

    while(left <= right)
    {
        while(a[left] < v)
        {
            left = left + 1;
        }
        while(a[right] > v)
        {
            right = right - 1;
        }
        if (left <= right) {
            swap(a[left], a[right]);
            left = left + 1;
            right = right - 1;
        }
    }
    if (first < right)
    {
          QuickSort(a,first, right);
    }
    if (left < last) {
          QuickSort(a, left, last);
    }
    
}

int main(void)
{
    vector <int> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p); 
    }

    QuickSort(v, 0, n - 1);
    for (auto i: v)
    {
        cout << i << " ";
    }  
    cout << endl;
};
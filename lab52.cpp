#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int swift_Down(vector <int> &v, int i)
{
 
    while (2  * i + 1 < v.size()) 
    {
        int left_top = 2 * i + 1;
        int right_top = 2 * i + 2;
        int j = left_top;
        if (right_top < v.size() && v[right_top] > v[left_top]) 
        {   
            j = right_top;
        }
        if (v[i] >= v[j]) {
            break;
        }
        swap(v[i], v[j]);
        i = j;
    }
    return i + 1;
}

int main(void)
{
    int n;
    cin >> n;
    vector <int> heap;
    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        heap.push_back(p);
    }
    int change;
    cin >> change;
    while(change != 0){
        int index, value;
        cin >> index >> value;
        heap[index - 1] -= value;
        value = heap[index - 1];
        cout << swift_Down(heap, index - 1)<< endl;;
        change --;
    }
    for(int i = 0; i < n; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
};
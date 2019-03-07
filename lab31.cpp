#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int> &a, int start, int end)
{
  
  if (end - start < 2) 
  {
    return;
  }
  if (end - start == 2)
  {
    if (a[start] > a[start + 1])
    {
      swap(a[start], a[start + 1]);
      return;
    } 
  }
  mergeSort(a, start, start + (end - start) / 2);
  mergeSort(a, start + (end - start) / 2 , end);
  
  vector<int> b;
  int first_start = start;
  int last_start = start + (end - start) / 2;
  int first_start2 = last_start;

  while(b.size() < end - start)
  {
    if (first_start >= last_start || ( first_start2 < end && a[first_start2] <= a[first_start]))
    {
      b.push_back(a[first_start2]);
      first_start2++;
    }
    else
    {
      b.push_back(a[first_start]);
      first_start++;
    }
    
  }
  for(int i = start; i < end; i++)
  {
    a[i] = b[i - start];
  }
}

int main(void)
{
  vector <int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    v.push_back(p);
  }
  
  mergeSort(v, 0, n);

  for (auto i: v)
  {
    cout << i << " ";
  }  
  cout << endl;   
};
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for(int g = 0; g < n; g++)
    {
        for(int j = 0; j < n; j++)
        {
            if (A[j] > A[j + 1]) 
            {
                int x = 0;
                x = A[j + 1];
                A[j + 1] = A[j];
                A[j] = x;
            }
        }
    
    }
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    
    cout << endl;
    return 0;
};
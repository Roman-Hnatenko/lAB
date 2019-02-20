#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int A[n];
    for(int h = 0; h < n; h++)
    {
        cin >> A[h];
    }
    
    for( int i = 0; i < n; i++)
    {
        int min = i, value = A[i];

        for(int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min]) 
            {
                min = j;
            }
            
        }
        int tmp = A[i];
        A[i] = A[min];
        A[min] = tmp;
    }
    for(int g = 0; g < n; g++)
    {
        cout << A[g] << " ";
    }
    cout << endl;
    return 0;  
};
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{

    int n, m;
    cin >> n >> m;
    int A[n];
    for(int j = 0; j < n; j++)
    {
        cin >> A[j];
    }

    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        int left = 0;
        int right = n - 1;
        do
        {
            int middleIndex = (left + right) / 2;
            if (A[middleIndex] < x)
            {
                left = middleIndex + 1;
            }
            else
            {
                right = middleIndex;
            }
            
        } while (left < right);

        if (A[left] == x)
        {
            cout << left + 1 << " ";
            for(int  z = 0; z < (n + 1) - left; z++)
            {
                if(A[left + z] != x)
                {
                    cout << left + z;
                    break;
               
                }
            }
        }    
        else
        {
            cout << 0;
        }    
        cout << endl;   
    }
    return 0;      
};
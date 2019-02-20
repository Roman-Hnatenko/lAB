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

            int right_2 = n - 1;

            while(left + 1  < right_2)
            {
                
                int middle = (right_2 + left) / 2;
                x == A[middle] ? left = middle : right_2 = middle;
                
            }
            if (A[left] == x)
            {
                
                if(A[left + 1] == x)
                {
                    left++;

                }
                cout << left + 1;
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

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    int value;
    int counter = 0;

    cin >> value;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == value)
        {
            counter ++;
        }
        
    }
    cout << counter << endl;
    return 0;
}
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int swift_Up(vector <int> &v, int value)
{
    value -= 1;
    while(value != 0)
    { 
       if(v[value] >= v[(value - 1) / 2])
        {
            swap(v[value], v[(value  - 1) / 2]);
            value = (value  - 1) / 2;
        }
        else
        {
            break;
        }
    }
    return value + 1;
}

int main(void)
{
    int n;
    cin >> n;
    vector <int> heap;
    for(int i = 0; i < n; i++)
    {
        int p;
        scanf("%i", &p);
        heap.push_back(p);
    }
    int change;
    cin >> change;
    while(change != 0){
        int index, value;
        cin >> index >> value;
        heap[index - 1] += value;
        value = heap[index - 1];
        printf( "%i\n" , swift_Up(heap, index));
        change --;
    }

    for(int i = 0; i < n; i++)
    {
       printf("%i" " ", heap [i]);
    }
    printf("\n");
   
};
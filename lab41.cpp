#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
   
    vector <int> firstStack;
    while(true){
        string operation;
        cin >> operation;
        
        if(operation == "push")
        {
            int n;
            cin >> n;
            firstStack.push_back(n);
            cout << "ok"<< endl;
        }
        else if (operation == "pop")
        {
            cout << firstStack.back() << endl;
            firstStack.pop_back();
        }
        else if (operation == "back") 
        {
            cout << firstStack.back()<< endl;
        }
        else if (operation == "size") 
        {
            cout << firstStack.size() << endl;
        }
        else if (operation == "clear") 
        {
            firstStack.clear();
            cout << "ok" << endl;
        }
        else
        {
            cout << "bye" << endl;
            break;
        }
        
     } 
    
  
};
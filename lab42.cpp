#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    vector <int> stack, converseStack;
    int counter = 0;
    
    while(true){
        
        string operation;
        cin >> operation;
        
        if(operation == "push")
        {
            int n;
            cin >> n;
            stack.push_back(n);
            cout << "ok"<< endl;
        }
       
        
        else if (operation == "clear") 
        {
            stack.clear();
            converseStack.clear();
            cout << "ok" << endl;
        }
        else if (operation == "exit")
        {
            cout << "bye" << endl;
            break;
        }
        
    }
  
};